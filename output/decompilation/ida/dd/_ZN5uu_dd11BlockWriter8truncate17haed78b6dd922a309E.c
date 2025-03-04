__int64 __fastcall uu_dd::BlockWriter::truncate(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v4; // [rsp+0h] [rbp-8h] BYREF

  v4 = v1;
  if ( *(_QWORD *)a1 == 0x8000000000000000LL )
    v2 = uu_dd::Output::truncate((_BYTE *)(a1 + 8));
  else
    v2 = uu_dd::bufferedoutput::BufferedOutput::truncate(a1);
  v4 = v2;
  if ( v2 )
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v4);
  return v4;
}
