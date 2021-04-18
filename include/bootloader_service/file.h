#pragma once

#include <efi.h>
#include <efilib.h>

EFI_STATUS openVolume(IN EFI_SIMPLE_FILE_SYSTEM_PROTOCOL *volume,
                      OUT EFI_FILE_HANDLE *root);
EFI_STATUS openFile(IN EFI_FILE_HANDLE root, OUT EFI_FILE_HANDLE *file,
                    IN CHAR16 *fileName, IN UINT64 mode,
                    IN UINT64 attribute);
EFI_STATUS readFile(IN EFI_FILE_HANDLE file, IN OUT UINTN *bufferSize,
                    OUT VOID *buffer);
EFI_STATUS getFileInfo(IN EFI_FILE_HANDLE file,
                       IN EFI_GUID *informationType,
                       IN OUT UINTN *bufferSize, OUT VOID *buffer);
EFI_STATUS closeFile(IN EFI_FILE_PROTOCOL *file);

void loadKernel(EFI_HANDLE ImageHandle, EFI_SYSTEM_TABLE *SystemTable);