__int64 __fastcall uu_sort::tmp_dir::TmpDirWrapper::wait_if_signal(__int64 a1)
{
  __int64 v1; // r14
  volatile __int32 *v2; // rbx
  _BYTE *v3; // r14
  __int64 result; // rax
  char is_zero_slow_path; // al
  char v6; // al
  __int64 v7; // [rsp+0h] [rbp-28h] BYREF
  char v8; // [rsp+8h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 48);
  v2 = (volatile __int32 *)(v1 + 16);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 16), 1, 0) )
    std::sys::sync::mutex::futex::Mutex::lock_contended(v1 + 16);
  if ( 2LL * std::panicking::panic_count::GLOBAL_PANIC_COUNT )
  {
    is_zero_slow_path = std::panicking::panic_count::is_zero_slow_path();
    if ( !*(_BYTE *)(v1 + 20) )
    {
      if ( !is_zero_slow_path )
        goto LABEL_6;
      goto LABEL_5;
    }
    v6 = is_zero_slow_path ^ 1;
LABEL_15:
    v7 = v1 + 16;
    v8 = v6;
    core::result::unwrap_failed(aCalledResultUn_5, 43LL, &v7, &off_193B60, &off_193EC8);
  }
  if ( *(_BYTE *)(v1 + 20) )
  {
    v6 = 0;
    goto LABEL_15;
  }
LABEL_5:
  v3 = (_BYTE *)(v1 + 20);
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
