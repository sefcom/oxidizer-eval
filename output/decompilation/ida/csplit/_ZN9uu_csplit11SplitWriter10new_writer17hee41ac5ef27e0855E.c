__int64 __fastcall uu_csplit::SplitWriter::new_writer(__int64 a1)
{
  __int128 v2; // xmm0
  _OWORD v3[2]; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v4[40]; // [rsp+20h] [rbp-28h] BYREF

  uu_csplit::split_name::SplitName::get((__int64)v4, *(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40));
  std::fs::File::create(v3, v4);
  if ( LODWORD(v3[0]) == 1 )
    return *((_QWORD *)&v3[0] + 1);
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v3, DWORD1(v3[0]));
  core::ptr::drop_in_place<core::option::Option<std::io::buffered::bufwriter::BufWriter<std::fs::File>>>(a1);
  v2 = v3[0];
  *(_OWORD *)(a1 + 16) = v3[1];
  *(_OWORD *)a1 = v2;
  ++*(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_BYTE *)(a1 + 56) = 0;
  return 0LL;
}