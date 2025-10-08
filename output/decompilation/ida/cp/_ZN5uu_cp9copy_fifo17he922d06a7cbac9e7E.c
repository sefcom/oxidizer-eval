__int64 __fastcall uu_cp::copy_fifo(__int64 a1, __int64 a2, char ***a3, char a4, char a5)
{
  int v7; // ebp
  __int64 fifo; // rax
  __int64 result; // rax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  _OWORD dest[3]; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+38h] [rbp-B0h]

  std::fs::metadata(dest);
  v7 = dest[0];
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, a2);
  if ( v7 != 2 )
  {
    uu_cp::OverwriteMode::verify((__int64)dest, a4, a2, a3, a5);
    if ( *(_QWORD *)&dest[0] != 0x800000000000000CLL )
    {
      result = v14;
      *(_QWORD *)(a1 + 48) = v14;
      v10 = dest[0];
      v11 = dest[1];
      *(_OWORD *)(a1 + 32) = dest[2];
      *(_OWORD *)(a1 + 16) = v11;
      *(_OWORD *)a1 = v10;
      return result;
    }
    result = std::fs::remove_file(a2, a3);
    if ( result )
    {
      *(_QWORD *)a1 = 0x8000000000000001LL;
      *(_QWORD *)(a1 + 8) = result;
      return result;
    }
  }
  fifo = uucore::features::fs::make_fifo(a2, a3);
  if ( fifo )
    return uu_cp::copy_fifo::{{closure}}(a1, a2, a3, fifo);
  result = 0x800000000000000CLL;
  *(_QWORD *)a1 = 0x800000000000000CLL;
  return result;
}