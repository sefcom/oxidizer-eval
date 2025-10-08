__int64 __fastcall uu_ln::simple_backup_path(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int128 v8; // [rsp+0h] [rbp-38h] BYREF
  __int64 v9; // [rsp+10h] [rbp-28h]

  core::str::converts::from_utf8(&v8, a2, a3);
  if ( (_DWORD)v8 == 1 )
    core::option::unwrap_failed(&off_F6200);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v8, *((_QWORD *)&v8 + 1), v9);
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    &v8,
    a4,
    a4 + a5);
  result = v9;
  *(_QWORD *)(a1 + 16) = v9;
  *(_OWORD *)a1 = v8;
  return result;
}