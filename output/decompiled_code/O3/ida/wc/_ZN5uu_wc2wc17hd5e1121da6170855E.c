__int64 __fastcall uu_wc::wc(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 result; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // r15
  __int64 **v7; // rbx
  unsigned int v8; // eax
  __int128 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int128 *v13; // rsi
  __int64 v14; // rdx
  const char *v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rdx
  char *v18; // rdx
  __int64 v19; // rax
  __int128 v20; // rax
  __int64 *v21; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 (__fastcall *v22)(); // [rsp+8h] [rbp-1A0h]
  __int64 **v23; // [rsp+10h] [rbp-198h]
  __int64 (__fastcall *v24)(); // [rsp+18h] [rbp-190h]
  _QWORD v25[2]; // [rsp+20h] [rbp-188h] BYREF
  _BYTE v26[40]; // [rsp+30h] [rbp-178h] BYREF
  __int64 v27; // [rsp+58h] [rbp-150h]
  __int64 v28; // [rsp+60h] [rbp-148h]
  __int64 v29; // [rsp+68h] [rbp-140h] BYREF
  __int64 v30; // [rsp+70h] [rbp-138h]
  __int64 *v31; // [rsp+78h] [rbp-130h] BYREF
  __int64 (__fastcall *v32)(); // [rsp+80h] [rbp-128h]
  __int64 *v33; // [rsp+88h] [rbp-120h]
  __int64 (__fastcall *v34)(); // [rsp+90h] [rbp-118h]
  __int64 v35; // [rsp+98h] [rbp-110h]
  __int64 v36; // [rsp+A8h] [rbp-100h]
  __int64 v37; // [rsp+B0h] [rbp-F8h] BYREF
  __int64 v38; // [rsp+B8h] [rbp-F0h]
  __int128 v39; // [rsp+C0h] [rbp-E8h] BYREF
  __int128 v40; // [rsp+D0h] [rbp-D8h]
  __int64 v41; // [rsp+E0h] [rbp-C8h]
  __int64 v42; // [rsp+E8h] [rbp-C0h]
  __int128 v43; // [rsp+F0h] [rbp-B8h] BYREF
  __int64 v44; // [rsp+100h] [rbp-A8h]
  __int128 v45; // [rsp+108h] [rbp-A0h]
  __int64 v46; // [rsp+118h] [rbp-90h]
  _QWORD v47[3]; // [rsp+120h] [rbp-88h] BYREF
  __int64 v48; // [rsp+138h] [rbp-70h] BYREF
  unsigned __int64 v49; // [rsp+140h] [rbp-68h]
  __int64 v50; // [rsp+148h] [rbp-60h]
  _OWORD v51[2]; // [rsp+150h] [rbp-58h] BYREF
  __int64 v52; // [rsp+170h] [rbp-38h]

  memset(v51, 0, sizeof(v51));
  v52 = 0LL;
  v3 = *(unsigned __int8 *)(a2 + 29);
  v36 = 1LL;
  if ( (_DWORD)v3 != 2 )
    v36 = uu_wc::compute_number_width(a1, a2);
  uu_wc::Inputs::try_iter((__int64)v26, a1, (_QWORD *)a2);
  result = *(_QWORD *)&v26[8];
  v5 = *(_QWORD *)&v26[16];
  if ( *(_QWORD *)v26 != 0x8000000000000003LL )
  {
    v38 = v3;
    v46 = v27;
    v45 = *(_OWORD *)&v26[24];
    v43 = *(_OWORD *)v26;
    v42 = *(_QWORD *)&v26[16];
    v44 = *(_QWORD *)&v26[16];
    v6 = 0LL;
    v7 = &v31;
    while ( 1 )
    {
      while ( 1 )
      {
        uu_wc::Inputs::try_iter::{{closure}}(&v48, &v43, v5);
        if ( v48 == 0x8000000000000003LL )
        {
          core::ptr::drop_in_place<core::iter::sources::from_fn::FromFn<uu_wc::Inputs::try_iter::{{closure}}>>(&v43);
          if ( (unsigned int)(v38 - 1) < 2 || !(_DWORD)v38 && v6 >= 2 )
          {
            v18 = 0LL;
            if ( (_DWORD)v38 != 2 )
              v18 = &aStdinTotal[7];
            v19 = uu_wc::print_stats(a2, v51, v18, 5LL, v36);
            if ( v19 )
            {
              *(_QWORD *)&v39 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v19);
              uucore::mods::error::set_exit_code(1LL);
              *(_QWORD *)&v20 = uucore::util_name();
              v43 = v20;
              v31 = (__int64 *)&v43;
              v32 = <&T as core::fmt::Display>::fmt;
              v33 = (__int64 *)&v39;
              v34 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
              *(_QWORD *)v26 = &unk_1311C8;
              *(_QWORD *)&v26[8] = 3LL;
              *(_QWORD *)&v26[32] = 0LL;
              *(_QWORD *)&v26[16] = &v31;
              *(_QWORD *)&v26[24] = 2LL;
              std::io::stdio::_eprint(v26);
              core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v39);
            }
          }
          return 0LL;
        }
        if ( v48 == 0x8000000000000002LL )
        {
          v21 = (__int64 *)v49;
          v22 = (__int64 (__fastcall *)())v50;
          v8 = (*(__int64 (**)(void))(v50 + 96))();
          uucore::mods::error::set_exit_code(v8);
          *(_QWORD *)&v9 = uucore::util_name();
          v39 = v9;
          v31 = (__int64 *)&v39;
          v32 = <&T as core::fmt::Display>::fmt;
          v33 = (__int64 *)&v21;
          v34 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
          *(_QWORD *)v26 = &unk_1311C8;
          *(_QWORD *)&v26[8] = 3LL;
          *(_QWORD *)&v26[32] = 0LL;
          *(_QWORD *)&v26[16] = &v31;
          *(_QWORD *)&v26[24] = 2LL;
          std::io::stdio::_eprint(v26);
          core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v21, v22);
          goto LABEL_5;
        }
        v47[0] = v48;
        v47[1] = v49;
        v47[2] = v50;
        uu_wc::word_count_from_input((__int64)v26, v47, (_BYTE *)a2);
        if ( *(_QWORD *)v26 )
          break;
LABEL_13:
        v41 = v27;
        v40 = *(_OWORD *)&v26[24];
        v39 = *(_OWORD *)&v26[8];
        *(_QWORD *)&v26[32] = v27;
        *(_OWORD *)&v26[16] = v40;
        *(_OWORD *)v26 = v39;
        v13 = (__int128 *)v26;
        <uu_wc::word_count::WordCount as core::ops::arith::AddAssign>::add_assign(v51, v26);
        if ( (_DWORD)v38 != 2 )
        {
          uu_wc::Input::to_title((unsigned __int64 *)&v21, (__int64)v47);
          if ( v21 == (__int64 *)0x8000000000000001LL )
          {
            v15 = 0LL;
          }
          else
          {
            v15 = (const char *)v22;
            v7 = v23;
          }
          v13 = &v39;
          v16 = uu_wc::print_stats(a2, &v39, v15, v7, v36);
          if ( v16 )
          {
            if ( !v15 )
            {
              v15 = aStdinTotal;
              v7 = (__int64 **)&byte_7;
            }
            v25[0] = v15;
            v25[1] = v7;
            v13 = (__int128 *)v25;
            v37 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                    v16,
                    v25);
            uucore::mods::error::set_exit_code(1LL);
            v29 = uucore::util_name();
            v30 = v17;
            v31 = &v29;
            v32 = <&T as core::fmt::Display>::fmt;
            v33 = &v37;
            v34 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            *(_QWORD *)v26 = &unk_1311C8;
            *(_QWORD *)&v26[8] = 3LL;
            *(_QWORD *)&v26[32] = 0LL;
            *(_QWORD *)&v26[16] = &v31;
            *(_QWORD *)&v26[24] = 2LL;
            std::io::stdio::_eprint(v26);
            core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v37);
          }
          core::ptr::drop_in_place<core::option::Option<alloc::borrow::Cow<str>>>(&v21);
          v7 = &v31;
        }
        core::ptr::drop_in_place<uu_wc::Input>(v47, v13, v14);
        ++v6;
      }
      if ( *(_DWORD *)v26 != 2 )
      {
        v25[0] = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                   v28,
                   v47);
        uucore::mods::error::set_exit_code(1LL);
        v29 = uucore::util_name();
        v30 = v12;
        v21 = &v29;
        v22 = <&T as core::fmt::Display>::fmt;
        v23 = (__int64 **)v25;
        v24 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v31 = (__int64 *)&unk_1311C8;
        v32 = (__int64 (__fastcall *)())(&dword_0 + 3);
        v35 = 0LL;
        v33 = (__int64 *)&v21;
        v34 = (__int64 (__fastcall *)())(&dword_0 + 2);
        std::io::stdio::_eprint(&v31);
        core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v25[0]);
        goto LABEL_13;
      }
      v25[0] = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                 *(_QWORD *)&v26[8],
                 v47);
      uucore::mods::error::set_exit_code(1LL);
      v29 = uucore::util_name();
      v30 = v10;
      v21 = &v29;
      v22 = <&T as core::fmt::Display>::fmt;
      v23 = (__int64 **)v25;
      v24 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      v31 = (__int64 *)&unk_1311C8;
      v32 = (__int64 (__fastcall *)())(&dword_0 + 3);
      v35 = 0LL;
      v33 = (__int64 *)&v21;
      v34 = (__int64 (__fastcall *)())(&dword_0 + 2);
      std::io::stdio::_eprint(&v31);
      core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v25[0]);
      core::ptr::drop_in_place<uu_wc::Input>(v47, v47, v11);
LABEL_5:
      ++v6;
    }
  }
  return result;
}
