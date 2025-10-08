__int64 __fastcall uu_touch::touch_file(
        __int64 (__fastcall **a1)(),
        __int64 (__fastcall **a2)(),
        int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        int a8)
{
  __int64 v8; // rbp
  unsigned __int8 v10; // bl
  unsigned __int8 v12; // r13
  __int64 (__fastcall **v13)(); // rsi
  __int64 (__fastcall **v14)(); // rbp
  __int64 updated; // rbx
  __int64 v16; // rax
  __int64 (__fastcall **v17)(); // r13
  char code_point_reverse; // al
  int v19; // edx
  int v20; // ebx
  char v21; // bp
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v25; // eax
  __int64 (__fastcall *v26)(); // rdx
  __int64 v27; // rax
  __int64 (__fastcall *v28)(); // rdx
  __int64 v29; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 (__fastcall **v30)(); // [rsp+8h] [rbp-1A0h]
  __int128 v31; // [rsp+10h] [rbp-198h] BYREF
  _BYTE *v32; // [rsp+20h] [rbp-188h]
  __int64 v33; // [rsp+28h] [rbp-180h]
  __int64 v34; // [rsp+30h] [rbp-178h]
  _BYTE v35[24]; // [rsp+48h] [rbp-160h] BYREF
  __int64 (__fastcall *v36)(); // [rsp+60h] [rbp-148h]
  __int64 (__fastcall **v37)(); // [rsp+68h] [rbp-140h]
  __int64 v38; // [rsp+70h] [rbp-138h]
  __int64 v39; // [rsp+78h] [rbp-130h] BYREF
  _BYTE *v40; // [rsp+80h] [rbp-128h] BYREF
  __int64 (__fastcall *v41)(); // [rsp+88h] [rbp-120h]
  char v42[8]; // [rsp+90h] [rbp-118h] BYREF
  __int128 v43; // [rsp+98h] [rbp-110h]
  __int64 v44; // [rsp+A8h] [rbp-100h]
  __int128 v45; // [rsp+B0h] [rbp-F8h] BYREF
  _BYTE *v46; // [rsp+C0h] [rbp-E8h]
  __int64 (__fastcall **dest)(); // [rsp+C8h] [rbp-E0h] BYREF
  __int64 (__fastcall **v48)(); // [rsp+D0h] [rbp-D8h]

  v8 = a6;
  v38 = a5;
  v10 = a3;
  if ( a3 )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v42, asc_58F18, 1LL);
    v12 = *(_BYTE *)(a4 + 49);
    if ( !v12 )
    {
LABEL_3:
      v13 = a1;
      std::fs::metadata(&dest);
      goto LABEL_6;
    }
  }
  else
  {
    dest = a1;
    v48 = a2;
    <T as alloc::string::SpecToString>::spec_to_string(v42, &dest);
    v12 = *(_BYTE *)(a4 + 49);
    if ( !v12 )
      goto LABEL_3;
  }
  v13 = a1;
  std::fs::symlink_metadata(&dest);
LABEL_6:
  if ( (_DWORD)dest != 2 )
    goto LABEL_22;
  v44 = v8;
  v14 = v48;
  if ( !(unsigned __int8)std::io::error::Error::kind(v48) )
  {
    v37 = v14;
    if ( *(_BYTE *)(a4 + 48) )
      goto LABEL_10;
    if ( v12 )
    {
      *(_QWORD *)v35 = 0LL;
      *(_OWORD *)&v35[8] = v43;
      LOBYTE(v36) = 1;
      v40 = v35;
      v41 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v31 = &off_279D28;
      *((_QWORD *)&v31 + 1) = 2LL;
      v34 = 0LL;
      v32 = &v40;
      v33 = 1LL;
      v13 = (__int64 (__fastcall **)())&v31;
      core::option::Option<T>::map_or_else(&v45, &v31);
      LODWORD(v33) = 1;
      v31 = v45;
      v32 = v46;
      v16 = alloc::boxed::Box<T>::new(&v31);
      updated = v16;
      if ( *(_BYTE *)(a4 + 50) )
        goto LABEL_11;
      v29 = v16;
      v30 = &off_279E10;
      v25 = <uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v16);
      uucore::mods::error::set_exit_code(v25);
      v40 = (_BYTE *)uucore::util_name();
      v41 = v26;
      *(_QWORD *)v35 = &v40;
      *(_QWORD *)&v35[8] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v35[16] = &v29;
      v36 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      *(_QWORD *)&v31 = &unk_279D48;
      *((_QWORD *)&v31 + 1) = 3LL;
      v34 = 0LL;
      v32 = v35;
      v33 = 2LL;
      std::io::stdio::_eprint(&v31);
      v13 = v30;
      core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v29, v30);
LABEL_10:
      updated = 0LL;
LABEL_11:
      core::ptr::drop_in_place<std::io::error::Error>(v37);
      goto LABEL_23;
    }
    v13 = a1;
    std::fs::File::create(&v29, a1, a2);
    LODWORD(v8) = v44;
    if ( (_DWORD)v29 == 1 )
    {
      LODWORD(v38) = 1;
      v17 = v30;
      alloc::string::String::from_utf8_lossy(&v31, a1, a2);
      *(_QWORD *)v35 = *((_QWORD *)&v31 + 1);
      *(_QWORD *)&v35[8] = &v32[*((_QWORD *)&v31 + 1)];
      code_point_reverse = core::str::validations::next_code_point_reverse(v35);
      v20 = v19;
      v21 = code_point_reverse & (v19 != (_DWORD)&unk_110000);
      core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v31);
      if ( v21 == 1 && v20 == 47 )
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v35, aNoSuchFileOrDi_0, 25LL);
        v32 = *(_BYTE **)&v35[16];
        v31 = *(_OWORD *)v35;
        v22 = alloc::boxed::Box<T>::new(&v31);
        v23 = std::io::error::Error::_new(40LL, v22, &off_279D98);
        v13 = (__int64 (__fastcall **)())v43;
        updated = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                    v23,
                    v43,
                    *((_QWORD *)&v43 + 1));
        core::ptr::drop_in_place<std::io::error::Error>(v17);
      }
      else
      {
        v13 = a1;
        v27 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                v17,
                a1,
                a2);
        updated = v27;
        if ( !*(_BYTE *)(a4 + 50) )
        {
          v39 = v27;
          uucore::mods::error::set_exit_code(1LL);
          v40 = (_BYTE *)uucore::util_name();
          v41 = v28;
          *(_QWORD *)v35 = &v40;
          *(_QWORD *)&v35[8] = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&v35[16] = &v39;
          v36 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
          *(_QWORD *)&v31 = &unk_279D48;
          *((_QWORD *)&v31 + 1) = 3LL;
          v34 = 0LL;
          v32 = v35;
          v33 = 2LL;
          std::io::stdio::_eprint(&v31);
          core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v39);
          updated = 0LL;
        }
      }
      goto LABEL_11;
    }
    core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(&v29);
    if ( (unsigned __int8)<uu_touch::Source as core::cmp::PartialEq>::eq(*(_QWORD *)(a4 + 24))
      && __OFSUB__(-*(_QWORD *)a4, 1LL) )
    {
      goto LABEL_10;
    }
    core::ptr::drop_in_place<std::io::error::Error>(v37);
LABEL_22:
    v13 = a2;
    updated = uu_touch::update_times((_DWORD)a1, (_DWORD)a2, v10, v12, *(unsigned __int8 *)(a4 + 51), v38, v8, a7, a8);
    goto LABEL_23;
  }
  v13 = (__int64 (__fastcall **)())v43;
  updated = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
              v14,
              v43,
              *((_QWORD *)&v43 + 1));
LABEL_23:
  core::ptr::drop_in_place<alloc::string::String>(v42, v13);
  return updated;
}