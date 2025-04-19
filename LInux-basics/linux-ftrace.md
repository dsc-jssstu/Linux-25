# Interacting with Ftrace via the `tracefs` File System

Ftrace, a powerful kernel tracing utility, utilizes the `tracefs` file system as its interface for control and output. This document outlines how to access and interact with ftrace through `tracefs`.

**Core Concept:**

When any ftrace functionality is enabled in the kernel configuration, the directory `/sys/kernel/tracing` is automatically created. This directory is the mount point for the `tracefs` file system, providing access to ftrace's control and data files.


**Mounting `tracefs`:**

You can mount this directory using either of the following methods:


**1. Automatic Mounting via `/etc/fstab`:**

Add the following line to your `/etc/fstab` file for automatic mounting on system boot:

**2. Runtime Mounting:**

Mount the filesystem manually while the system is running with this command:

```bash
mount -t tracefs nodev /sys/kernel/tracing

ln -s /sys/kernel/tracing /tracing

This creates a /tracing link pointing to /sys/kernel/tracing.
