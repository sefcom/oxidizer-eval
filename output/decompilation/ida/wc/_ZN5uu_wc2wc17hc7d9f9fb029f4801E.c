__int64 __fastcall uu_wc::wc(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r15
  __int128 v3; // rax
  unsigned __int64 i; // rbp
  unsigned int v5; // eax
  __int64 (__fastcall *v6)(); // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  const char *v9; // r13
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  const char *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v18; // [rsp+0h] [rbp-198h] BYREF
  __int64 v19; // [rsp+8h] [rbp-190h] BYREF
  __int64 v20; // [rsp+10h] [rbp-188h]
  __int64 v21; // [rsp+18h] [rbp-180h] BYREF
  __int64 (__fastcall *v22)(); // [rsp+20h] [rbp-178h]
  __int64 *v23; // [rsp+28h] [rbp-170h]
  __int64 (__fastcall *v24)(); // [rsp+30h] [rbp-168h]
  __int64 *v25; // [rsp+38h] [rbp-160h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+40h] [rbp-158h]
  __int64 *v27; // [rsp+48h] [rbp-150h]
  __int64 (__fastcall *v28)(); // [rsp+50h] [rbp-148h]
  __int64 v29; // [rsp+58h] [rbp-140h]
  void *v30; // [rsp+68h] [rbp-130h] BYREF
  __int128 v31; // [rsp+70h] [rbp-128h]
  __int128 v32; // [rsp+80h] [rbp-118h]
  __int64 v33; // [rsp+90h] [rbp-108h]
  __int64 v34; // [rsp+98h] [rbp-100h]
  __int64 v35; // [rsp+A0h] [rbp-F8h]
  __int64 v36; // [rsp+A8h] [rbp-F0h]
  __int64 v37; // [rsp+B0h] [rbp-E8h] BYREF
  __int128 v38; // [rsp+B8h] [rbp-E0h]
  __int128 v39; // [rsp+C8h] [rbp-D0h]
  __int64 v40; // [rsp+D8h] [rbp-C0h]
  _QWORD v41[3]; // [rsp+E0h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+F8h] [rbp-A0h] BYREF
  __int64 v43; // [rsp+100h] [rbp-98h]
  __int64 v44; // [rsp+108h] [rbp-90h]
  _OWORD v45[2]; // [rsp+110h] [rbp-88h] BYREF
  __int64 v46; // [rsp+130h] [rbp-68h]
  _OWORD v47[2]; // [rsp+140h] [rbp-58h] BYREF
  __int64 v48; // [rsp+160h] [rbp-38h]

  memset(v45, 0, sizeof(v45));
  v46 = 0LL;
  v2 = *(unsigned __int8 *)(a2 + 29);
  v35 = 1LL;
  if ( (_DWORD)v2 != 2 )
    v35 = uu_wc::compute_number_width(a1, a2);
  uu_wc::Inputs::try_iter((__int64)&v30, a1, (_QWORD *)a2);
  v3 = v31;
  if ( v30 != (void *)0x8000000000000003LL )
  {
    v36 = v2;
    v40 = v33;
    v39 = v32;
    v37 = (__int64)v30;
    v38 = v31;
    for ( i = 0LL; ; ++i )
    {
      while ( 1 )
      {
        uu_wc::Inputs::try_iter::{{closure}}(&v42, &v37, *((_QWORD *)&v3 + 1));
        if ( v42 == 0x8000000000000003LL )
        {
          core::ptr::drop_in_place<core::iter::sources::from_fn::FromFn<uu_wc::Inputs::try_iter::{{closure}}>>(&v37);
          if ( (unsigned int)(v36 - 1) < 2 || !(_DWORD)v36 && i >= 2 )
          {
            v13 = 0LL;
            if ( (_DWORD)v36 != 2 )
              v13 = aTotal;
            v14 = uu_wc::print_stats(a2, v45, v13, 5LL, v35);
            if ( v14 )
            {
              v21 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v14);
              uucore::mods::error::set_exit_code(1LL);
              v37 = uucore::util_name();
              *(_QWORD *)&v38 = v16;
              v25 = &v37;
              v26 = <&T as core::fmt::Display>::fmt;
              v27 = &v21;
              v28 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
              v30 = &unk_F9318;
              *(_QWORD *)&v31 = 3LL;
              *((_QWORD *)&v31 + 1) = &v25;
              v32 = 2uLL;
              std::io::stdio::_eprint(&v30);
              core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v21);
            }
            else
            {
              core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(0LL, v45, v15);
            }
          }
          *(_QWORD *)&v3 = 0LL;
          return v3;
        }
        if ( v42 != 0x8000000000000002LL )
          break;
        v19 = v43;
        v20 = v44;
        v5 = (*(__int64 (**)(void))(v44 + 88))();
        uucore::mods::error::set_exit_code(v5);
        v21 = uucore::util_name();
        v22 = v6;
        v25 = &v21;
        v26 = <&T as core::fmt::Display>::fmt;
        v27 = &v19;
        v28 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v30 = &unk_F9318;
        *(_QWORD *)&v31 = 3LL;
        *((_QWORD *)&v31 + 1) = &v25;
        v32 = 2uLL;
        std::io::stdio::_eprint(&v30);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v19, v20);
        ++i;
      }
      v41[0] = v42;
      v41[1] = v43;
      v41[2] = v44;
      uu_wc::word_count_from_input((__int64)&v30, v41, (_BYTE *)a2);
      if ( v30 )
      {
        if ( (_DWORD)v30 == 2 )
        {
          v18 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                  v31,
                  v41);
          uucore::mods::error::set_exit_code(1LL);
          v19 = uucore::util_name();
          v20 = v7;
          v21 = (__int64)&v19;
          v22 = <&T as core::fmt::Display>::fmt;
          v23 = &v18;
          v24 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
          v25 = (__int64 *)&unk_F9318;
          v26 = (__int64 (__fastcall *)())(&dword_0 + 3);
          v29 = 0LL;
          v27 = &v21;
          v28 = (__int64 (__fastcall *)())(&dword_0 + 2);
          std::io::stdio::_eprint(&v25);
          core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v18);
          goto LABEL_7;
        }
        v18 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                v34,
                v41);
        uucore::mods::error::set_exit_code(1LL);
        v19 = uucore::util_name();
        v20 = v8;
        v21 = (__int64)&v19;
        v22 = <&T as core::fmt::Display>::fmt;
        v23 = &v18;
        v24 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v25 = (__int64 *)&unk_F9318;
        v26 = (__int64 (__fastcall *)())(&dword_0 + 3);
        v29 = 0LL;
        v27 = &v21;
        v28 = (__int64 (__fastcall *)())(&dword_0 + 2);
        std::io::stdio::_eprint(&v25);
        core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v18);
      }
      v48 = v33;
      v47[1] = v32;
      v47[0] = v31;
      <uu_wc::word_count::WordCount as core::ops::arith::AddAssign>::add_assign(v45, v47);
      if ( (_DWORD)v36 != 2 )
      {
        uu_wc::Input::to_title(&v21, (__int64)v41);
        if ( __OFSUB__(-v21, 1LL) || v21 != 0x8000000000000001LL )
        {
          v9 = (const char *)v22;
          v2 = (__int64)v23;
        }
        else
        {
          v9 = 0LL;
        }
        v10 = uu_wc::print_stats(a2, v47, v9, v2, v35);
        if ( v10 )
        {
          if ( !v9 )
          {
            v9 = "<stdin>";
            v2 = 7LL;
          }
          v18 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                  v10,
                  v9,
                  v2);
          uucore::mods::error::set_exit_code(1LL);
          v19 = uucore::util_name();
          v20 = v12;
          v25 = &v19;
          v26 = <&T as core::fmt::Display>::fmt;
          v27 = &v18;
          v28 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
          v30 = &unk_F9318;
          *(_QWORD *)&v31 = 3LL;
          *((_QWORD *)&v31 + 1) = &v25;
          v32 = 2uLL;
          std::io::stdio::_eprint(&v30);
          core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v18);
        }
        else
        {
          core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(0LL, v47, v11);
        }
        core::ptr::drop_in_place<core::option::Option<alloc::borrow::Cow<std::ffi::os_str::OsStr>>>(&v21);
      }
LABEL_7:
      core::ptr::drop_in_place<uu_wc::Input>(v41);
    }
  }
  return v3;
}