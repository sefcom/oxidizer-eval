__int64 __fastcall uu_echo::execute(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v8; // r14
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r12
  char v15; // [rsp+4h] [rbp-B4h] BYREF
  int v16; // [rsp+5h] [rbp-B3h]
  __int16 v17; // [rsp+9h] [rbp-AFh]
  char v18; // [rsp+Bh] [rbp-ADh]
  int v19; // [rsp+Ch] [rbp-ACh]
  __int64 v20; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+18h] [rbp-A0h]
  __int64 v22; // [rsp+20h] [rbp-98h]
  __int64 v23; // [rsp+28h] [rbp-90h]
  __int64 v24; // [rsp+30h] [rbp-88h]
  _BYTE v25[8]; // [rsp+38h] [rbp-80h] BYREF
  __int64 v26; // [rsp+40h] [rbp-78h]
  _BYTE v27[32]; // [rsp+48h] [rbp-70h] BYREF
  __int64 v28; // [rsp+68h] [rbp-50h]
  _QWORD v29[2]; // [rsp+70h] [rbp-48h] BYREF
  char v30; // [rsp+80h] [rbp-38h]

  v19 = a3;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v27);
  v28 = 0LL;
  <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v20, v27);
  v5 = v21;
  if ( __OFSUB__(-v21, 1LL) )
  {
LABEL_2:
    core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>>(v27);
    if ( (_BYTE)v19 && (v6 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a1, asc_13393, 1LL)) != 0 )
      return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
    else
      return 0LL;
  }
  if ( a4 )
  {
    while ( 2 )
    {
      v8 = v22;
      v24 = v23;
      if ( !v20 || (v9 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a1, asc_13394, 1LL)) == 0 )
      {
        v29[0] = v8;
        v29[1] = v24;
        v30 = 3;
        while ( 1 )
        {
          v10 = uucore::features::format::parse_escape_only::{{closure}}(v29);
          if ( (_BYTE)v10 == 4 )
            break;
          v15 = v10;
          v18 = HIBYTE(v10);
          v17 = HIDWORD(v10) >> 8;
          v16 = v10 >> 8;
          <uucore::features::format::escape::EscapedChar as uucore::features::format::FormatChar>::write(v25, &v15, a1);
          if ( v25[0] )
          {
            v13 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v26);
            goto LABEL_24;
          }
          if ( v25[1] )
          {
            v13 = 0LL;
            goto LABEL_24;
          }
        }
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(v5, v8);
        <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v20, v27);
        v5 = v21;
        if ( v21 != 0x8000000000000000LL )
          continue;
        goto LABEL_2;
      }
      break;
    }
  }
  else
  {
    while ( 1 )
    {
      v8 = v22;
      v11 = v23;
      if ( v20 )
      {
        v9 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a1, asc_13394, 1LL);
        if ( v9 )
          break;
      }
      v12 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a1, v8, v11);
      if ( v12 )
      {
        v13 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v12);
        goto LABEL_24;
      }
      core::ptr::drop_in_place<std::ffi::os_str::OsString>(v5, v8);
      <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v20, v27);
      v5 = v21;
      if ( v21 == 0x8000000000000000LL )
        goto LABEL_2;
    }
  }
  v13 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9);
LABEL_24:
  v14 = v13;
  core::ptr::drop_in_place<std::ffi::os_str::OsString>(v5, v8);
  core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>>(v27);
  return v14;
}