#!/bin/bash

find ./include/entity -name "*.[ch]" | xargs clang-format -i
find ./include/bootloader_service -name "*.[ch]" | xargs clang-format -i
find ./src -name "*.[ch]" | xargs clang-format -i