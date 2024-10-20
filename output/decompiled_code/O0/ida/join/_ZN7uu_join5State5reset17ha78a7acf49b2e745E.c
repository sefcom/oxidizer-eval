__int64 __fastcall uu_join::State::reset(_QWORD *a1, __int128 *a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // r14
  __int64 v6; // rcx
  __int128 v7; // [rsp+0h] [rbp-48h]
  __int128 v8; // [rsp+10h] [rbp-38h]
  __int128 v9; // [rsp+20h] [rbp-28h]

  v3 = a1[1];
  if ( !v3 || (v3 & 7) != 0 || a1[2] >= 0x2AAAAAAAAAAAAABuLL )
    core::panicking::panic_nounwind(anon_88bd953382d64e16d63aef396fcf2aa0_54_llvm_18377431372254846744, 166LL);
  a1[2] = 0LL;
  result = core::ptr::drop_in_place<[uu_join::Line]>();
  if ( *(_QWORD *)a2 != 0x8000000000000000LL )
  {
    v9 = a2[2];
    v8 = a2[1];
    v7 = *a2;
    v5 = a1[2];
    if ( v5 == *a1 )
      alloc::raw_vec::RawVec<T,A>::grow_one(a1);
    result = a1[1];
    v6 = 48 * v5;
    *(_OWORD *)(result + v6 + 32) = v9;
    *(_OWORD *)(result + v6 + 16) = v8;
    *(_OWORD *)(result + v6) = v7;
    a1[2] = v5 + 1;
  }
  return result;
}
