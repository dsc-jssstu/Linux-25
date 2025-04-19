# Interacting with Ftrace via the `tracefs` File System

Ftrace, a powerful kernel tracing utility, utilizes the `tracefs` file system as its interface for control and output. This document outlines how to access and interact with ftrace through `tracefs`.

**Core Concept:**

When any ftrace functionality is enabled in the kernel configuration, the directory `/sys/kernel/tracing` is automatically created. This directory is the mount point for the `tracefs` file system, providing access to ftrace's control and data files.

## Mounting the `tracefs` File System

To make the ftrace interface accessible, the `tracefs` file system needs to be mounted. You have two primary methods for achieving this:

**1. Automatic Mounting on Boot (via `/etc/fstab`):**

   For persistent mounting across system reboots, add the following entry to your `/etc/fstab` file:

tracefs /sys/kernel/tracing tracefs defaults 0 0

After modifying `/etc/fstab`, you can either reboot your system or manually mount the file system immediately using:

```bash
sudo mount /sys/kernel/tracing
tracefs        /sys/kernel/tracing    tracefs   defaults         0       0
After adding this line, the `tracefs` filesystem will be automatically mounted at `/sys/kernel/tracing` each time your system boots.

**2. Mounting at Runtime:**

Alternatively, you can mount the filesystem manually while your system is running using the following command:

```bash
mount -t tracefs nodev /sys/kernel/tracing

Creating a Symbolic Link (Optional):

For faster and more convenient access to the tracing directory, you might consider creating a symbolic link:

ln -s /sys/kernel/tracing /tracing

This will create a symbolic link named /tracing that points to /sys/kernel/tracing, allowing you to navigate to the tracing files more quickly.
