# ROS2 Repository for Ground Segment - Part of the SimLE SeaSentinel Program
# Description

This repository contains packages enabling communication between the Ground Segment (GS) and the Autonomous Surface Vehicle (ASV). As part of the project, the primary task for the GS is to provide an environment with a Graphical User Interface (GUI) for users. The goal is to create a package that publishes and subscribes to data from the ASV, such as:

    1) Current and voltage on batteries,
    2) Direction of movement,
    3) Resultant vector of propeller thrust.

All functionalities will integrate with the RViz GUI library provided by the ROS2 framework.

# Table of Contents

Below is a brief description of each part of the repository:

    1) Build:
        Contains files necessary to build the application from scripts.

    2) Install:
        Includes the built code that must be sourced before using the packages.

    3) Log:
        TODO: Add logging functionality.

    4) Src:
        Contains the written scripts.