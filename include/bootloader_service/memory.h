#pragma once

#include <efi.h>
#include <efilib.h>

EFI_STATUS allocatePool(IN EFI_MEMORY_TYPE poolType, IN UINTN bufferSize,
                        OUT VOID **buffer);

EFI_STATUS allocatePages(IN EFI_ALLOCATE_TYPE type,
                         IN EFI_MEMORY_TYPE memoryType, IN UINTN pages,
                         IN OUT EFI_PHYSICAL_ADDRESS *addr);

EFI_STATUS freePool(IN VOID *buffer);

EFI_STATUS getMemoryMap(IN OUT UINTN *memoryMapSize,
                        IN OUT EFI_MEMORY_DESCRIPTOR *memoryMap,
                        OUT UINTN *mapKey, OUT UINTN *descriptorSize,
                        OUT UINT32 *descriptorVersion);
