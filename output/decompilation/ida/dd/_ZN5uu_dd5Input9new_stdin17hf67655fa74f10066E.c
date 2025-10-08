_QWORD *__fastcall uu_dd::Input::new_stdin(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 (__fastcall **v5)(); // rdx
  unsigned __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v9; // [rsp+0h] [rbp-E8h] BYREF
  __int128 v10; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v11; // [rsp+18h] [rbp-D0h]
  __int128 v12; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+30h] [rbp-B8h]
  int v14; // [rsp+38h] [rbp-B0h]
  int v15; // [rsp+58h] [rbp-90h]

  uu_dd::Source::stdin_as_file();
  v9 = 1LL;
  if ( *(_BYTE *)(a2 + 66) )
  {
    std::fs::File::metadata(&v12, (char *)&v9 + 4, v3);
    if ( (_DWORD)v12 == 2 )
    {
      v4 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v12 + 1));
LABEL_10:
      a1[1] = v4;
      a1[2] = v5;
      *a1 = 1LL;
      core::ptr::drop_in_place<uu_dd::Source>(HIDWORD(v9));
      return a1;
    }
    if ( (v15 & 0xF000) != 0x4000 )
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v10, aSettingFlagsFo, 51LL);
      v13 = v11;
      v12 = v10;
      v14 = 1;
      v4 = alloc::boxed::Box<T>::new(&v12);
      v5 = &off_13DCD8;
      goto LABEL_10;
    }
  }
  v6 = *(_QWORD *)(a2 + 128);
  if ( v6 && (uu_dd::Source::skip(&v9, v6) & 1) != 0 )
  {
    v4 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v7);
    goto LABEL_10;
  }
  a1[1] = v9;
  a1[2] = a2;
  *a1 = 0LL;
  return a1;
}