__int64 __fastcall uu_dd::BlockWriter::truncate(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // [rsp+0h] [rbp-8h] BYREF

  v3 = v1;
  if ( __OFSUB__(0LL, *(_QWORD *)a1) )
  {
    v3 = uu_dd::Output::truncate((_BYTE *)(a1 + 8));
    if ( !v3 )
      return v3;
    goto LABEL_5;
  }
  v3 = uu_dd::bufferedoutput::BufferedOutput::truncate(a1);
  if ( v3 )
LABEL_5:
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v3);
  return v3;
}