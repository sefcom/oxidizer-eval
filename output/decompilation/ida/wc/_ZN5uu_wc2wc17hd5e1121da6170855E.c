__int64 __fastcall uu_wc::wc(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // r15
  __int64 **v11; // rbx
  __int64 v12; // rdi
  __int128 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int128 *v17; // rsi
  __int64 v18; // rdx
  char *v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rdx
  char *v22; // rdx
  __int64 v23; // rax
  __int128 v24; // rax
  __int64 *v25; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+8h] [rbp-1A0h]
  __int64 **v27; // [rsp+10h] [rbp-198h]
  __int64 (__fastcall *v28)(); // [rsp+18h] [rbp-190h]
  _QWORD v29[2]; // [rsp+20h] [rbp-188h] BYREF
  _BYTE v30[40]; // [rsp+30h] [rbp-178h] BYREF
  __int64 v31; // [rsp+58h] [rbp-150h]
  __int64 v32; // [rsp+60h] [rbp-148h]
  __int64 v33; // [rsp+68h] [rbp-140h] BYREF
  __int64 v34; // [rsp+70h] [rbp-138h]
  __int64 *v35; // [rsp+78h] [rbp-130h] BYREF
  __int64 (__fastcall *v36)(); // [rsp+80h] [rbp-128h]
  __int64 *v37; // [rsp+88h] [rbp-120h]
  __int64 (__fastcall *v38)(); // [rsp+90h] [rbp-118h]
  __int64 v39; // [rsp+98h] [rbp-110h]
  __int64 v40; // [rsp+A8h] [rbp-100h]
  __int64 v41; // [rsp+B0h] [rbp-F8h] BYREF
  __int64 v42; // [rsp+B8h] [rbp-F0h]
  __int128 v43; // [rsp+C0h] [rbp-E8h] BYREF
  __int128 v44; // [rsp+D0h] [rbp-D8h]
  __int64 v45; // [rsp+E0h] [rbp-C8h]
  __int64 v46; // [rsp+E8h] [rbp-C0h]
  __int128 v47; // [rsp+F0h] [rbp-B8h] BYREF
  __int64 v48; // [rsp+100h] [rbp-A8h]
  __int128 v49; // [rsp+108h] [rbp-A0h]
  __int64 v50; // [rsp+118h] [rbp-90h]
  _QWORD v51[3]; // [rsp+120h] [rbp-88h] BYREF
  __int64 v52; // [rsp+138h] [rbp-70h] BYREF
  unsigned __int64 v53; // [rsp+140h] [rbp-68h]
  __int64 v54; // [rsp+148h] [rbp-60h]
  _OWORD v55[2]; // [rsp+150h] [rbp-58h] BYREF
  __int64 v56; // [rsp+170h] [rbp-38h]

  memset(v55, 0, sizeof(v55));
  v56 = 0LL;
  v7 = *(unsigned __int8 *)(a2 + 29);
  v40 = 1LL;
  if ( (_DWORD)v7 != 2 )
    v40 = uu_wc::compute_number_width(a1, a2, a3, a4, a5, a6);
  uu_wc::Inputs::try_iter((__int64)v30, a1, (_QWORD *)a2);
  result = *(_QWORD *)&v30[8];
  v9 = *(_QWORD *)&v30[16];
  if ( *(_QWORD *)v30 != 0x8000000000000003LL )
  {
    v42 = v7;
    v50 = v31;
    v49 = *(_OWORD *)&v30[24];
    v47 = *(_OWORD *)v30;
    v46 = *(_QWORD *)&v30[16];
    v48 = *(_QWORD *)&v30[16];
    v10 = 0LL;
    v11 = &v35;
    while ( 1 )
    {
      while ( 1 )
      {
        uu_wc::Inputs::try_iter::{{closure}}(&v52, &v47, v9);
        if ( v52 == 0x8000000000000003LL )
        {
          core::ptr::drop_in_place<core::iter::sources::from_fn::FromFn<uu_wc::Inputs::try_iter::{{closure}}>>(&v47);
          if ( (unsigned int)(v42 - 1) < 2 || !(_DWORD)v42 && v10 >= 2 )
          {
            v22 = 0LL;
            if ( (_DWORD)v42 != 2 )
              v22 = &aStdinTotal[7];
            v23 = uu_wc::print_stats((_BYTE *)a2, (__int64 *)v55, v22, 5LL, v40);
            if ( v23 )
            {
              *(_QWORD *)&v43 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v23);
              uucore::mods::error::set_exit_code(1LL);
              *(_QWORD *)&v24 = uucore::util_name();
              v47 = v24;
              v35 = (__int64 *)&v47;
              v36 = <&T as core::fmt::Display>::fmt;
              v37 = (__int64 *)&v43;
              v38 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
              *(_QWORD *)v30 = &unk_1311C8;
              *(_QWORD *)&v30[8] = 3LL;
              *(_QWORD *)&v30[32] = 0LL;
              *(_QWORD *)&v30[16] = &v35;
              *(_QWORD *)&v30[24] = 2LL;
              std::io::stdio::_eprint(v30);
              core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v43);
            }
          }
          return 0LL;
        }
        if ( v52 == 0x8000000000000002LL )
        {
          v25 = (__int64 *)v53;
          v26 = (__int64 (__fastcall *)())v54;
          v12 = (*(unsigned int (**)(void))(v54 + 96))();
          uucore::mods::error::set_exit_code(v12);
          *(_QWORD *)&v13 = uucore::util_name();
          v43 = v13;
          v35 = (__int64 *)&v43;
          v36 = <&T as core::fmt::Display>::fmt;
          v37 = (__int64 *)&v25;
          v38 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
          *(_QWORD *)v30 = &unk_1311C8;
          *(_QWORD *)&v30[8] = 3LL;
          *(_QWORD *)&v30[32] = 0LL;
          *(_QWORD *)&v30[16] = &v35;
          *(_QWORD *)&v30[24] = 2LL;
          std::io::stdio::_eprint(v30);
          core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v25, v26);
          goto LABEL_5;
        }
        v51[0] = v52;
        v51[1] = v53;
        v51[2] = v54;
        uu_wc::word_count_from_input((__int64)v30, v51, (_BYTE *)a2);
        if ( *(_QWORD *)v30 )
          break;
LABEL_13:
        v45 = v31;
        v44 = *(_OWORD *)&v30[24];
        v43 = *(_OWORD *)&v30[8];
        *(_QWORD *)&v30[32] = v31;
        *(_OWORD *)&v30[16] = v44;
        *(_OWORD *)v30 = v43;
        v17 = (__int128 *)v30;
        <uu_wc::word_count::WordCount as core::ops::arith::AddAssign>::add_assign(v55, v30);
        if ( (_DWORD)v42 != 2 )
        {
          uu_wc::Input::to_title((unsigned __int64 *)&v25, (__int64)v51);
          if ( v25 == (__int64 *)0x8000000000000001LL )
          {
            v19 = 0LL;
          }
          else
          {
            v19 = (char *)v26;
            v11 = v27;
          }
          v17 = &v43;
          v20 = uu_wc::print_stats((_BYTE *)a2, (__int64 *)&v43, v19, (__int64)v11, v40);
          if ( v20 )
          {
            if ( !v19 )
            {
              v19 = aStdinTotal;
              v11 = (__int64 **)&byte_7;
            }
            v29[0] = v19;
            v29[1] = v11;
            v17 = (__int128 *)v29;
            v41 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                    v20,
                    v29);
            uucore::mods::error::set_exit_code(1LL);
            v33 = uucore::util_name();
            v34 = v21;
            v35 = &v33;
            v36 = <&T as core::fmt::Display>::fmt;
            v37 = &v41;
            v38 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            *(_QWORD *)v30 = &unk_1311C8;
            *(_QWORD *)&v30[8] = 3LL;
            *(_QWORD *)&v30[32] = 0LL;
            *(_QWORD *)&v30[16] = &v35;
            *(_QWORD *)&v30[24] = 2LL;
            std::io::stdio::_eprint(v30);
            core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v41);
          }
          core::ptr::drop_in_place<core::option::Option<alloc::borrow::Cow<str>>>(&v25);
          v11 = &v35;
        }
        core::ptr::drop_in_place<uu_wc::Input>(v51, v17, v18);
        ++v10;
      }
      if ( *(_DWORD *)v30 != 2 )
      {
        v29[0] = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                   v32,
                   v51);
        uucore::mods::error::set_exit_code(1LL);
        v33 = uucore::util_name();
        v34 = v16;
        v25 = &v33;
        v26 = <&T as core::fmt::Display>::fmt;
        v27 = (__int64 **)v29;
        v28 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v35 = (__int64 *)&unk_1311C8;
        v36 = (__int64 (__fastcall *)())(&dword_0 + 3);
        v39 = 0LL;
        v37 = (__int64 *)&v25;
        v38 = (__int64 (__fastcall *)())(&dword_0 + 2);
        std::io::stdio::_eprint(&v35);
        core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v29[0]);
        goto LABEL_13;
      }
      v29[0] = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                 *(_QWORD *)&v30[8],
                 v51);
      uucore::mods::error::set_exit_code(1LL);
      v33 = uucore::util_name();
      v34 = v14;
      v25 = &v33;
      v26 = <&T as core::fmt::Display>::fmt;
      v27 = (__int64 **)v29;
      v28 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      v35 = (__int64 *)&unk_1311C8;
      v36 = (__int64 (__fastcall *)())(&dword_0 + 3);
      v39 = 0LL;
      v37 = (__int64 *)&v25;
      v38 = (__int64 (__fastcall *)())(&dword_0 + 2);
      std::io::stdio::_eprint(&v35);
      core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v29[0]);
      core::ptr::drop_in_place<uu_wc::Input>(v51, v51, v15);
LABEL_5:
      ++v10;
    }
  }
  return result;
}
