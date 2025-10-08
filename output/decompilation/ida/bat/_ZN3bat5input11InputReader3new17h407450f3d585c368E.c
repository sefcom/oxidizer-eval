__int64 (__fastcall **__fastcall bat::input::InputReader::new(__int64 a1, __int128 *a2))()
{
  __int128 v2; // rax
  char v3; // bp
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int64 v6; // rax
  __int64 (__fastcall **result)(); // rax
  __int128 v8; // [rsp+8h] [rbp-70h] BYREF
  __int64 v9; // [rsp+18h] [rbp-60h]
  _OWORD v10[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v11; // [rsp+50h] [rbp-28h]

  *(_QWORD *)&v8 = 0LL;
  *((_QWORD *)&v8 + 1) = 1LL;
  v9 = 0LL;
  *(_QWORD *)&v2 = std::io::BufRead::read_until(a2, 10LL, &v8);
  v10[0] = v2;
  if ( (v2 & 1) != 0 )
    core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(v10);
  if ( v9 )
  {
    v3 = content_inspector::inspect(*((_QWORD *)&v8 + 1));
    if ( v3 == 4 )
    {
      bat::input::read_utf16_line(v10, a2, &v8, 10LL, 0LL);
      if ( LOBYTE(v10[0]) == 1 )
        core::ptr::drop_in_place<core::result::Result<bool,std::io::error::Error>>(v10);
      v3 = 4;
    }
    else if ( v3 == 3 )
    {
      bat::input::read_utf16_line(v10, a2, &v8, 0LL, 10LL);
      if ( LOBYTE(v10[0]) == 1 )
        core::ptr::drop_in_place<core::result::Result<bool,std::io::error::Error>>(v10);
      v3 = 3;
    }
  }
  else
  {
    v3 = 7;
  }
  v11 = *((_QWORD *)a2 + 6);
  v4 = *a2;
  v5 = a2[1];
  v10[2] = a2[2];
  v10[1] = v5;
  v10[0] = v4;
  v6 = alloc::boxed::Box<T>::new(v10);
  *(_QWORD *)(a1 + 16) = v9;
  *(_OWORD *)a1 = v8;
  *(_QWORD *)(a1 + 24) = v6;
  result = &off_6CE530;
  *(_QWORD *)(a1 + 32) = &off_6CE530;
  *(_BYTE *)(a1 + 40) = v3;
  return result;
}