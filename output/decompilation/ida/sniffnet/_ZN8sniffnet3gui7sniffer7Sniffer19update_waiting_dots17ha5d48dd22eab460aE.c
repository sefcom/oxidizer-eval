__int64 __fastcall sniffnet::gui::sniffer::Sniffer::update_waiting_dots(_QWORD *a1)
{
  _OWORD *v1; // rbx
  unsigned __int64 v2; // rsi
  __int64 result; // rax
  __int128 v4; // [rsp+0h] [rbp-28h] BYREF
  __int64 v5; // [rsp+10h] [rbp-18h]

  v1 = a1 + 58;
  v2 = a1[60];
  if ( v2 >= 3 )
  {
    core::ptr::drop_in_place<alloc::string::String>(a1 + 58);
    a1[58] = 0LL;
    a1[59] = 1LL;
    a1[60] = 0LL;
    v2 = 0LL;
  }
  alloc::slice::<impl [T]>::repeat(&v4, v2 + 1);
  core::ptr::drop_in_place<alloc::string::String>(v1);
  result = v5;
  a1[60] = v5;
  *v1 = v4;
  return result;
}