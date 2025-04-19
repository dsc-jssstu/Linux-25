# Interacting with Ftrace via the `tracefs` File System

Ftrace, a powerful kernel tracing utility, utilizes the `tracefs` file system as its interface for control and output. This document outlines how to access and interact with ftrace through `tracefs`.

**Core Concept:**

When any ftrace functionality is enabled in the kernel configuration, the directory `/sys/kernel/tracing` is automatically created. This directory is the mount point for the `tracefs` file system, providing access to ftrace's control and data files.

## Mounting the `tracefs` File System

To make the ftrace interface accessible, the `tracefs` file system needs to be mounted. You have two primary methods for achieving this:

**1. Automatic Mounting on Boot (via `/etc/fstab`):**

   For persistent mounting across system reboots, add the following entry to your `/etc/fstab` file:

