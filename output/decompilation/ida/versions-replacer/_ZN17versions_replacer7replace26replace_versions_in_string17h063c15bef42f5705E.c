__int64 __fastcall versions_replacer::replace::replace_versions_in_string(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  _QWORD v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v8[0] = 0LL;
  v6 = once_cell::sync::OnceCell<T>::get_or_try_init();
  regex::regex::string::Regex::replacen(a1, v6, a2, a3, a4, v8);
  *(_QWORD *)(a1 + 24) = v8[0];
  return a1;
}