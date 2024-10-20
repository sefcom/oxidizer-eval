__int64 __fastcall uu_shred::get_size(__int128 *a1)
{
  __int64 result; // rax
  __int64 v2; // r14
  __int128 v3; // [rsp+0h] [rbp-58h] BYREF
  __int64 v4; // [rsp+10h] [rbp-48h] BYREF
  __int64 v5; // [rsp+18h] [rbp-40h] BYREF
  __int64 v6; // [rsp+20h] [rbp-38h]
  __int64 v7; // [rsp+28h] [rbp-30h]
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  if ( *(_QWORD *)a1 == 0x8000000000000000LL )
  {
    v4 = *((_QWORD *)a1 + 2);
    v3 = *a1;
LABEL_8:
    v9 = v4;
    v8 = v3;
    return uu_shred::get_size::{{closure}}(&v8);
  }
  result = uu_shred::get_size::{{closure}}(a1);
  v4 = *((_QWORD *)a1 + 2);
  v3 = *a1;
  if ( !result )
    goto LABEL_8;
  if ( (_QWORD)v3 != 0x8000000000000000LL )
  {
    v2 = result;
    alloc::raw_vec::RawVec<T,A>::current_memory(&v5, &v3);
    if ( v6 )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v4, v5, v6, v7);
    return v2;
  }
  return result;
}
