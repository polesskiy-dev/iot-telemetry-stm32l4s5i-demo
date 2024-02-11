# iot-telemetry-stm32l4s5i-demo
IoT telemetry demo on B-L4S5I-IOT01A STM32 dev board

# Application Code Structure

The `app/` directory contains all the custom application code, organized into subdirectories for core functionality, diagnostics, drivers, middlewares, and utilities. This structure ensures a clear separation between auto-generated code by CubeMX and the application-specific logic developed for this project.

## Directory Overview

- [`core/`](./firmware/app/core): This directory houses the core functionalities of the application, including the main logic, FreeRTOS task definitions, and task orchestration. It serves as the central hub for the application's operation and state management.

- [`diagnostics/`](./firmware/app/diagnostics): Contains modules related to logging, error handling, and diagnostic functionalities. It includes mechanisms for system health checks, error reporting, and potentially a command-line interface for diagnostics and monitoring.

- [`drivers/`](./firmware/app/drivers): Custom drivers developed or modified for the project are placed here. This directory is intended for drivers that interface directly with hardware components, distinct from those generated by CubeMX, providing tailored hardware interaction.

- [`middlewares/`](./firmware/app/middlewares): Hosts any developed or significantly modified middleware. This can encompass communication protocols, file systems, or custom algorithms that interface with the lower-level hardware abstraction layers.

- [`utils/`](./firmware/app/utils): A collection of common utilities and helper functions that are utilized across the application. This includes, but is not limited to, data structures, mathematical functions, and general-purpose utilities for tasks like string manipulation and buffer management.

## Contribution Guidelines

Contributors are encouraged to maintain the modular structure of the application, ensuring that new functionalities are appropriately categorized into the existing directory structure. When adding new modules or functionalities, please update this README to reflect the changes. For detailed contribution guidelines, see [CONTRIBUTING.md](./CONTRIBUTING.md).

## Getting Started

To get started with the application development:

1. Clone the repository and navigate to the `app/` directory.
2. Review the specific READMEs in each subdirectory to understand the modules and their functionalities.
3. Follow the project's setup instructions in the main [README.md](./README.md) at the root of the repository.

For more information on building and deploying the application, refer to the documentation in the `docs/` directory.

## License

This project is licensed under the [LICENSE](./LICENSE) found at the root of the repository. By contributing to this project, you agree to abide by its terms.

