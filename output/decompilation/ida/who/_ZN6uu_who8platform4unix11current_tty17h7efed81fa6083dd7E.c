char *__fastcall uu_who::platform::unix::current_tty(__int64 a1)
{
  char *result; // rax
  char *v2; // r14
  size_t v3; // rax
  __int64 started; // rax
  _BYTE v5[8]; // [rsp+8h] [rbp-40h] BYREF
  __int64 v6; // [rsp+10h] [rbp-38h]
  __int64 v7; // [rsp+18h] [rbp-30h]
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  result = ttyname(0);
  if ( result )
  {
    v2 = result;
    v3 = strlen(result);
    alloc::ffi::c_str::<impl core::ffi::c_str::CStr>::to_string_lossy(v5, v2, v3 + 1);
    started = core::str::<impl str>::trim_start_matches(v6, v7);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v8, started);
    *(_QWORD *)(a1 + 16) = v9;
    *(_OWORD *)a1 = v8;
    return (char *)core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v5);
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 1LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}