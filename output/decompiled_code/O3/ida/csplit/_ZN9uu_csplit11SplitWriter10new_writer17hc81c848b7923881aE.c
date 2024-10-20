__int64 __fastcall uu_csplit::SplitWriter::new_writer(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // r14
  int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // [rsp+0h] [rbp-58h] BYREF
  int v9; // [rsp+8h] [rbp-50h]
  __int16 v10; // [rsp+Ch] [rbp-4Ch]
  _DWORD v11[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v12; // [rsp+18h] [rbp-40h]
  size_t v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+28h] [rbp-30h]
  __int64 v15; // [rsp+30h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 40);
  uu_csplit::split_name::SplitName::get(&v13, *(_QWORD *)(a1 + 32), v1);
  v8 = 0x1B600000000LL;
  v9 = 16777472;
  v10 = 1;
  v2 = v14;
  std::fs::OpenOptions::_open(v11, &v8, v14, v15);
  if ( v13 )
    _rust_dealloc(v2, v13, 1LL);
  if ( v11[0] )
    return v12;
  v4 = v11[1];
  v5 = _rust_alloc(0x2000LL, 1LL);
  if ( !v5 )
    alloc::raw_vec::handle_error(1LL, 0x2000LL);
  v6 = v5;
  if ( *(_QWORD *)a1 != 0x8000000000000000LL )
  {
    if ( !*(_BYTE *)(a1 + 24) )
    {
      v7 = std::io::buffered::bufwriter::BufWriter<W>::flush_buf(a1);
      if ( v7 )
        core::ptr::drop_in_place<std::io::error::Error>(v7);
    }
    if ( *(_QWORD *)a1 )
      _rust_dealloc(*(_QWORD *)(a1 + 8), *(_QWORD *)a1, 1LL);
    close(*(_DWORD *)(a1 + 28));
    v1 = *(_QWORD *)(a1 + 40);
  }
  *(_QWORD *)a1 = 0x2000LL;
  *(_QWORD *)(a1 + 8) = v6;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_BYTE *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = v4;
  *(_QWORD *)(a1 + 40) = v1 + 1;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_BYTE *)(a1 + 56) = 0;
  return 0LL;
}
