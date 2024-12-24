__int64 __fastcall uu_ln::simple_backup_path(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 slice; // rax
  __int64 result; // rax
  __int128 v9; // [rsp+8h] [rbp-50h] BYREF
  __int64 v10; // [rsp+18h] [rbp-40h]
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-28h]

  std::sys::os_str::bytes::Slice::to_str(&v9, a2, a3);
  if ( (_QWORD)v9 )
    core::option::unwrap_failed(&off_12D800);
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v9, *((_QWORD *)&v9 + 1), v10);
  v12 = v10;
  v11 = v9;
  slice = core::slice::iter::Iter<T>::make_slice(a4, a4 + a5);
  alloc::vec::Vec<T,A>::append_elements(&v11, slice);
  result = v12;
  *(_QWORD *)(a1 + 16) = v12;
  *(_OWORD *)a1 = v11;
  return result;
}
