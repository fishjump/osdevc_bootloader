#pragma once

#include <efi.h>
#include <efilib.h>

EFI_STATUS closeProtocol(EFI_HANDLE handle, EFI_GUID *protocol,
                         EFI_HANDLE agentHandle,
                         EFI_HANDLE controllerHandle);

EFI_STATUS locateProtocol(EFI_GUID *protocol, VOID *registration,
                          VOID **interface);

EFI_STATUS handleProtocol(EFI_HANDLE handle, EFI_GUID *protocol,
                          VOID **interface);
