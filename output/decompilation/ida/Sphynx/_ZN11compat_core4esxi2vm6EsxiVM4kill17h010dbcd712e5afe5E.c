__int64 __fastcall compat_core::esxi::vm::EsxiVM::kill(__m128i *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // r13
  unsigned int v7; // eax
  __int64 result; // rax
  __int64 v9; // [rsp+8h] [rbp-150h] BYREF
  __int128 v10; // [rsp+10h] [rbp-148h]
  _QWORD v11[3]; // [rsp+20h] [rbp-138h] BYREF
  _QWORD v12[4]; // [rsp+38h] [rbp-120h] BYREF
  int v13; // [rsp+58h] [rbp-100h] BYREF
  __m128i v14; // [rsp+60h] [rbp-F8h] BYREF
  _QWORD v15[29]; // [rsp+70h] [rbp-E8h] BYREF

  v2 = _rust_alloc(5LL, 1LL);
  if ( !v2 )
    alloc::raw_vec::RawVec<T,A>::allocate_in::{{closure}}(5LL, 1LL);
  v9 = v2;
  v10 = 5uLL;
  alloc::raw_vec::RawVec<T,A>::reserve(&v9, 0LL, 5LL);
  v3 = *((_QWORD *)&v10 + 1);
  core::slice::<impl [T]>::copy_from_slice(*((_QWORD *)&v10 + 1) + v9, 5LL, aForce, 5LL);
  *((_QWORD *)&v10 + 1) = v3 + 5;
  v12[0] = &v9;
  v12[1] = <alloc::string::String as core::fmt::Display>::fmt;
  v12[2] = a2;
  v12[3] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v15[0] = &off_3E63A0;
  v15[1] = 2LL;
  v15[2] = 0LL;
  v15[4] = v12;
  v15[5] = 2LL;
  alloc::fmt::format(v11, v15);
  if ( (_QWORD)v10 )
    _rust_dealloc(v9, v10, 1LL);
  v4 = v11[0];
  v5 = v11[1];
  v6 = v11[2];
  std::sys::unix::process::process_common::Command::new(
    v15,
    anon_72dc3a396521a012288a77322dff36ea_0_llvm_3663384724368157838,
    7LL);
  v7 = std::process::Stdio::null();
  std::sys::unix::process::process_common::Command::stdout(v15, v7);
  std::sys::unix::process::process_common::Command::arg(
    v15,
    anon_72dc3a396521a012288a77322dff36ea_1_llvm_3663384724368157838,
    2LL);
  std::sys::unix::process::process_common::Command::arg(v15, v4, v6);
  std::process::Command::status(&v13, v15);
  result = core::ptr::drop_in_place(v15);
  if ( v13 == 1 )
  {
    *a1 = _mm_loadu_si128(&v14);
    if ( v5 )
      return _rust_dealloc(v4, v5, 1LL);
  }
  else
  {
    if ( v5 )
      result = _rust_dealloc(v4, v5, 1LL);
    a1->m128i_i8[0] = 3;
  }
  return result;
}
