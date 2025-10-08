__int64 __fastcall firecracker::<impl core::convert::From<firecracker::MainError> for vmm::FcExitCode>::from(
        __int64 a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  unsigned int v3; // ebx

  LOBYTE(v1) = 1;
  switch ( *(_DWORD *)a1 )
  {
    case 2:
      LOBYTE(v1) = -103;
      goto LABEL_3;
    case 4:
      LOBYTE(v1) = -104;
      core::ptr::drop_in_place<firecracker::MainError>();
      return v1;
    case 9:
      if ( *(_BYTE *)(a1 + 8) == 29 )
        goto LABEL_8;
      goto LABEL_3;
    case 0xA:
      if ( *(_BYTE *)(a1 + 8) != 28 )
        goto LABEL_3;
LABEL_8:
      v3 = *(unsigned __int8 *)(a1 + 9);
      core::ptr::drop_in_place<firecracker::MainError>();
      result = v3;
      break;
    default:
LABEL_3:
      core::ptr::drop_in_place<firecracker::MainError>();
      result = v1;
      break;
  }
  return result;
}