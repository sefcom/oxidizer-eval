__int64 __fastcall uu_sort::tmp_dir::TmpDirWrapper::wait_if_signal(__int64 a1)
{
  __int64 v1; // r14
  volatile __int32 *v2; // rbx
  _BYTE *v3; // r14
  char v4; // bp
  __int64 result; // rax
  char is_zero_slow_path; // bp
  volatile __int32 *v7; // [rsp+8h] [rbp-30h] BYREF
  char v8; // [rsp+10h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 48);
  v2 = (volatile __int32 *)(v1 + 16);
  if ( (unsigned int)core::sync::atomic::atomic_compare_exchange(v1 + 16, 0LL, 1LL, 2LL, 0LL) )
    std::sys::sync::mutex::futex::Mutex::lock_contended(v1 + 16);
  if ( 2LL * std::panicking::panic_count::GLOBAL_PANIC_COUNT )
  {
    is_zero_slow_path = std::panicking::panic_count::is_zero_slow_path();
    v3 = (_BYTE *)(v1 + 20);
    if ( !(unsigned __int8)core::sync::atomic::atomic_load(v3, 0LL) )
    {
      if ( !is_zero_slow_path )
        goto LABEL_6;
      goto LABEL_5;
    }
    v4 = is_zero_slow_path ^ 1;
LABEL_15:
    v7 = v2;
    v8 = v4;
    core::result::unwrap_failed(aCalledResultUn_5, 43LL, &v7, &off_1D4788, &off_1D49A0);
  }
  v3 = (_BYTE *)(v1 + 20);
  v4 = 0;
  if ( (unsigned __int8)core::sync::atomic::atomic_load(v3, 0LL) )
    goto LABEL_15;
LABEL_5:
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path() )
  {
    *v3 = 1;
  }
LABEL_6:
  result = (unsigned int)_InterlockedExchange(v2, 0);
  if ( (_DWORD)result == 2 )
    return std::sys::sync::mutex::futex::Mutex::wake(v2);
  return result;
}
