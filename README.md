# Project Title

## Description
A brief description of the project.

## Installation
Instructions on how to install the project.

## Usage
How to use the project.

## Grammar Processing Workflow
The project uses a multi-step process to handle Gosu grammar:

1. **Grammar Definition (grammar.js)**
- Contains the formal grammar specification for Gosu
- Written for tree-sitter parser generator
- Defines syntax rules and language structure

2. **Parsing Process**
- Tree-sitter interprets the grammar.js file
- Generates a Concrete Syntax Tree (CST)
- CST is then converted to an Abstract Syntax Tree (AST) using OCaml and semgrep

## Contribution Guidelines
Instructions for contributing to the project.
