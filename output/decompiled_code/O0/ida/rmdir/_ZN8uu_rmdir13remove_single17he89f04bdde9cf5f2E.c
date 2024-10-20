__int64 *__fastcall uu_rmdir::remove_single(__int64 *a1, void *a2, size_t a3, int a4)
{
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v14; // [rsp+0h] [rbp-A8h] BYREF
  _QWORD v15[4]; // [rsp+10h] [rbp-98h] BYREF
  _QWORD v16[3]; // [rsp+30h] [rbp-78h] BYREF
  char v17; // [rsp+48h] [rbp-60h]
  _QWORD v18[11]; // [rsp+50h] [rbp-58h] BYREF

  if ( (a4 & 0x10000) != 0 )
  {
    v5 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    v6 = *(_QWORD *)(v5 + 8);
    v7 = *(_QWORD *)(v5 + 16);
    core::slice::raw::from_raw_parts::precondition_check(v6, 1LL, 1LL, v7);
    v16[0] = 1LL;
    v16[1] = a2;
    v16[2] = a3;
    v17 = 1;
    v15[0] = &v14;
    v15[1] = <&T as core::fmt::Display>::fmt;
    v15[2] = v16;
    v15[3] = <os_display::Quoted as core::fmt::Display>::fmt;
    v18[0] = &unk_1013B8;
    v18[1] = 3LL;
    v18[4] = 0LL;
    v18[2] = v15;
    v18[3] = 2LL;
    ((void (__fastcall *)(_QWORD *, __int64, __int64, __int64, __int64, __int64, __int64, __int64))std::io::stdio::_print)(
      v18,
      1LL,
      v8,
      v9,
      v10,
      v11,
      v6,
      v7);
  }
  v12 = std::sys::pal::unix::fs::rmdir(a2, a3);
  if ( v12 )
  {
    a1[1] = (__int64)a2;
    a1[2] = a3;
  }
  *a1 = v12;
  return a1;
}
