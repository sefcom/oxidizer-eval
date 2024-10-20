__int64 __fastcall uu_csplit::SplitWriter::new_writer(__int64 a1)
{
  int v2; // ebp
  __int64 v3; // r15
  __int64 v4; // r12
  _DWORD v5[2]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v6; // [rsp+8h] [rbp-60h]
  __int64 v7; // [rsp+10h] [rbp-58h] BYREF
  __int64 v8; // [rsp+18h] [rbp-50h]
  __int64 v9; // [rsp+20h] [rbp-48h]
  _BYTE v10[64]; // [rsp+28h] [rbp-40h] BYREF

  uu_csplit::split_name::SplitName::get(v10, *(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40));
  std::fs::File::create(v5, v10);
  if ( v5[0] )
    return v6;
  v2 = v5[1];
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v7, 0x2000LL, 0LL);
  v3 = v8;
  if ( v7 )
    alloc::raw_vec::handle_error(v8, v9);
  v4 = v9;
  if ( *(_QWORD *)a1 != 0x8000000000000000LL )
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::fs::File>>(a1);
  *(_QWORD *)a1 = v3;
  *(_QWORD *)(a1 + 8) = v4;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_BYTE *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = v2;
  if ( *(_QWORD *)(a1 + 40) == -1LL )
    core::panicking::panic_const::panic_const_add_overflow(&off_2A4FF8);
  ++*(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_BYTE *)(a1 + 56) = 0;
  return 0LL;
}
