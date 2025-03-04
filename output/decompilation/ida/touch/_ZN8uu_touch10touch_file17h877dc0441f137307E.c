__int64 __fastcall uu_touch::touch_file(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        unsigned int a8)
{
  __int64 v8; // rbp
  char v10; // bl
  char v11; // r13
  __int64 v12; // rbp
  __int64 updated; // rbx
  __int64 v14; // rax
  __int64 (__fastcall **v15)(); // r13
  int v16; // edx
  int v17; // ebx
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 (__fastcall *v20)(); // rdx
  __int64 v22; // rax
  __int64 (__fastcall *v23)(); // rdx
  __int64 v24; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 (__fastcall **v25)(); // [rsp+8h] [rbp-1A0h]
  __int128 v26; // [rsp+10h] [rbp-198h] BYREF
  _QWORD **v27; // [rsp+20h] [rbp-188h]
  __int64 v28; // [rsp+28h] [rbp-180h]
  __int64 v29; // [rsp+30h] [rbp-178h]
  __int64 v30; // [rsp+48h] [rbp-160h]
  __int64 v31; // [rsp+50h] [rbp-158h] BYREF
  _QWORD **v32; // [rsp+58h] [rbp-150h] BYREF
  __int64 (__fastcall *v33)(); // [rsp+60h] [rbp-148h]
  _QWORD *v34; // [rsp+68h] [rbp-140h] BYREF
  __int128 v35; // [rsp+70h] [rbp-138h]
  __int64 (__fastcall *v36)(); // [rsp+80h] [rbp-128h]
  _BYTE v37[8]; // [rsp+88h] [rbp-120h] BYREF
  __int128 v38; // [rsp+90h] [rbp-118h]
  __int64 v39; // [rsp+A0h] [rbp-108h]
  __int64 v40; // [rsp+A8h] [rbp-100h]
  __int128 v41; // [rsp+B0h] [rbp-F8h] BYREF
  _QWORD **v42; // [rsp+C0h] [rbp-E8h]
  __int64 v43; // [rsp+C8h] [rbp-E0h] BYREF
  __int64 v44; // [rsp+D0h] [rbp-D8h]

  v8 = a6;
  v40 = a5;
  v10 = a3;
  if ( a3 )
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(v37, asc_7527F, 1LL);
  }
  else
  {
    v43 = a1;
    v44 = a2;
    <T as alloc::string::ToString>::to_string(v37, &v43);
  }
  v11 = *(_BYTE *)(a4 + 49);
  if ( v11 )
    std::fs::symlink_metadata(&v43, a1, a2);
  else
    std::fs::metadata(&v43, a1, a2);
  if ( (_DWORD)v43 != 2 )
    goto LABEL_25;
  v39 = v8;
  v12 = v44;
  if ( !(unsigned __int8)std::io::error::Error::kind(v44) )
  {
    v30 = v12;
    if ( *(_BYTE *)(a4 + 48) )
      goto LABEL_11;
    if ( v11 )
    {
      v34 = 0LL;
      v35 = v38;
      LOBYTE(v36) = 1;
      v32 = &v34;
      v33 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v26 = &off_310D48;
      *((_QWORD *)&v26 + 1) = 2LL;
      v29 = 0LL;
      v27 = &v32;
      v28 = 1LL;
      core::option::Option<T>::map_or_else(&v41, &v26);
      LODWORD(v28) = 1;
      v26 = v41;
      v27 = v42;
      v14 = alloc::boxed::Box<T>::new(&v26);
      updated = v14;
      if ( *(_BYTE *)(a4 + 50) )
        goto LABEL_12;
      v24 = v14;
      v25 = &off_310E78;
      v19 = (unsigned int)<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v14);
      uucore::mods::error::set_exit_code(v19);
      v32 = (_QWORD **)uucore::util_name();
      v33 = v20;
      v34 = &v32;
      *(_QWORD *)&v35 = <&T as core::fmt::Display>::fmt;
      *((_QWORD *)&v35 + 1) = &v24;
      v36 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      *(_QWORD *)&v26 = &unk_310D68;
      *((_QWORD *)&v26 + 1) = 3LL;
      v29 = 0LL;
      v27 = &v34;
      v28 = 2LL;
      std::io::stdio::_eprint(&v26);
      core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v24, v25);
      goto LABEL_11;
    }
    std::fs::File::create(&v24, a1, a2);
    LODWORD(v8) = v39;
    if ( (_DWORD)v24 )
    {
      v15 = v25;
      std::sys::os_str::bytes::Slice::to_string_lossy(&v26, a1, a2);
      v34 = (_QWORD *)*((_QWORD *)&v26 + 1);
      *(_QWORD *)&v35 = (char *)v27 + *((_QWORD *)&v26 + 1);
      if ( !(unsigned int)core::str::validations::next_code_point_reverse(&v34)
        || (v17 = v16, v16 == (_DWORD)&unk_110000) )
      {
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v26);
      }
      else
      {
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v26);
        if ( v17 == 47 )
        {
          v18 = std::io::error::Error::new(39LL, aNoSuchFileOrDi_0, 25LL);
          updated = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                      v18,
                      v37);
          core::ptr::drop_in_place<std::io::error::Error>(v15);
          goto LABEL_12;
        }
      }
      v22 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
              v15,
              a1,
              a2);
      updated = v22;
      if ( !*(_BYTE *)(a4 + 50) )
      {
        v31 = v22;
        uucore::mods::error::set_exit_code(1LL);
        v32 = (_QWORD **)uucore::util_name();
        v33 = v23;
        v34 = &v32;
        *(_QWORD *)&v35 = <&T as core::fmt::Display>::fmt;
        *((_QWORD *)&v35 + 1) = &v31;
        v36 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        *(_QWORD *)&v26 = &unk_310D68;
        *((_QWORD *)&v26 + 1) = 3LL;
        v29 = 0LL;
        v27 = &v34;
        v28 = 2LL;
        std::io::stdio::_eprint(&v26);
        core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v31);
        updated = 0LL;
      }
      goto LABEL_12;
    }
    core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(&v24);
    if ( (unsigned __int8)<uu_touch::Source as core::cmp::PartialEq>::eq(*(_QWORD *)(a4 + 24)) )
    {
      if ( *(_QWORD *)a4 == 0x8000000000000000LL )
      {
LABEL_11:
        updated = 0LL;
LABEL_12:
        core::ptr::drop_in_place<std::io::error::Error>(v30);
        goto LABEL_26;
      }
    }
    core::ptr::drop_in_place<std::io::error::Error>(v30);
LABEL_25:
    updated = uu_touch::update_times(a1, a2, v10, v11, *(_BYTE *)(a4 + 51), v40, v8, a7, a8);
    goto LABEL_26;
  }
  updated = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
              v12,
              v37);
LABEL_26:
  core::ptr::drop_in_place<alloc::string::String>(v37);
  return updated;
}
