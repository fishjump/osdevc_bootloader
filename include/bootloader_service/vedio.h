#pragma once

#include <efi.h>
#include <efilib.h>

EFI_STATUS locateGraphicOutputProtocol(
    EFI_GRAPHICS_OUTPUT_PROTOCOL **graphicsOutputProtocol);

EFI_STATUS closeGraphicOutputProtocol(
    EFI_GRAPHICS_OUTPUT_PROTOCOL *graphicsOutputProtocol,
    EFI_HANDLE                    agentHandle);

EFI_STATUS queryMode(EFI_GRAPHICS_OUTPUT_PROTOCOL *graphicsOutputProtocol,
                     UINT32 modeNumber, UINTN *sizeOfInfo,
                     EFI_GRAPHICS_OUTPUT_MODE_INFORMATION **info);

EFI_STATUS setMode(EFI_GRAPHICS_OUTPUT_PROTOCOL *graphicsOutputProtocol,
                   UINT32                        modeNumber);

void printGraphicsInfo(EFI_GRAPHICS_OUTPUT_PROTOCOL_MODE *mode);