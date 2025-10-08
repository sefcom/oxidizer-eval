__int64 __fastcall uu_install::copy_files_into_dir(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // rdi
  __int128 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int128 v17; // rax
  __int64 v19; // [rsp+8h] [rbp-230h] BYREF
  __int64 v20; // [rsp+10h] [rbp-228h]
  __int64 *v21; // [rsp+18h] [rbp-220h] BYREF
  __int64 (__fastcall *v22)(); // [rsp+20h] [rbp-218h]
  void **p_dest; // [rsp+28h] [rbp-210h]
  __int64 (__fastcall *v24)(); // [rsp+30h] [rbp-208h]
  __int128 v25; // [rsp+38h] [rbp-200h] BYREF
  __int64 v26; // [rsp+48h] [rbp-1F0h]
  __int64 v27; // [rsp+50h] [rbp-1E8h]
  __int64 v28; // [rsp+58h] [rbp-1E0h]
  __int64 v29; // [rsp+60h] [rbp-1D8h]
  __int64 v30; // [rsp+68h] [rbp-1D0h]
  __int128 v31; // [rsp+70h] [rbp-1C8h] BYREF
  __int128 v32; // [rsp+80h] [rbp-1B8h]
  __int128 v33; // [rsp+90h] [rbp-1A8h]
  __int64 v34; // [rsp+A0h] [rbp-198h]
  void *dest; // [rsp+120h] [rbp-118h] BYREF
  __int128 v36; // [rsp+128h] [rbp-110h] BYREF
  __int64 v37; // [rsp+138h] [rbp-100h]
  __int64 v38; // [rsp+140h] [rbp-F8h]
  _OWORD v39[3]; // [rsp+1D0h] [rbp-68h] BYREF
  __int64 v40; // [rsp+200h] [rbp-38h]

  v29 = a5;
  if ( (unsigned __int8)std::path::Path::is_dir(a3, a4) )
  {
    if ( a2 )
    {
      v27 = a3;
      v28 = a4;
      v30 = 24 * a2;
      v8 = 0LL;
      do
      {
        v9 = *(_QWORD *)(a1 + v8 + 8);
        v10 = *(_QWORD *)(a1 + v8 + 16);
        std::fs::metadata(&dest);
        <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
          &v31,
          &dest,
          v9,
          v10);
        if ( (_DWORD)v31 == 2 )
        {
          v19 = *((_QWORD *)&v31 + 1);
          v20 = v32;
          v11 = (*(unsigned int (**)(void))(v32 + 88))();
          uucore::mods::error::set_exit_code(v11);
          *(_QWORD *)&v12 = uucore::util_name();
          v25 = v12;
          v21 = (__int64 *)&v25;
          v22 = <&T as core::fmt::Display>::fmt;
          p_dest = (void **)&v19;
          v24 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
          dest = &unk_1022C0;
          *(_QWORD *)&v36 = 3LL;
          v38 = 0LL;
          *((_QWORD *)&v36 + 1) = &v21;
          v37 = 2LL;
          std::io::stdio::_eprint(&dest);
          core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v19, v20);
        }
        else
        {
          core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v31);
          if ( (unsigned __int8)std::path::Path::is_dir(v9, v10) )
          {
            <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v25, v9, v10);
            dest = byte_9 + 4;
            v37 = v26;
            v36 = v25;
            uucore::mods::error::set_exit_code(1LL);
            v19 = uucore::util_name();
            v20 = v13;
            v21 = &v19;
            v22 = <&T as core::fmt::Display>::fmt;
            p_dest = &dest;
            v24 = <uu_install::InstallError as core::fmt::Display>::fmt;
            *(_QWORD *)&v31 = &unk_1022C0;
            *((_QWORD *)&v31 + 1) = 3LL;
            *(_QWORD *)&v33 = 0LL;
            *(_QWORD *)&v32 = &v21;
            *((_QWORD *)&v32 + 1) = 2LL;
            std::io::stdio::_eprint(&v31);
            core::ptr::drop_in_place<uu_install::InstallError>(&dest);
          }
          else
          {
            std::path::Path::to_path_buf(&v21, v27, v28);
            std::path::Path::components(&dest, v9, v10);
            <std::path::Components as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v31, &dest);
            if ( (_BYTE)v31 == 10 )
              core::option::unwrap_failed(&off_102450);
            v40 = v34;
            v39[2] = v33;
            v39[1] = v32;
            v39[0] = v31;
            std::path::PathBuf::push(&v21, v39);
            v14 = uu_install::copy(v9, v10, v22, p_dest, v29);
            if ( v14 )
            {
              v19 = v14;
              v20 = v15;
              v16 = (*(unsigned int (__fastcall **)(__int64))(v15 + 88))(v14);
              uucore::mods::error::set_exit_code(v16);
              *(_QWORD *)&v17 = uucore::util_name();
              v25 = v17;
              *(_QWORD *)&v31 = &v25;
              *((_QWORD *)&v31 + 1) = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)&v32 = &v19;
              *((_QWORD *)&v32 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
              dest = &unk_1022C0;
              *(_QWORD *)&v36 = 3LL;
              v38 = 0LL;
              *((_QWORD *)&v36 + 1) = &v31;
              v37 = 2LL;
              std::io::stdio::_eprint(&dest);
              core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
                v19,
                v20);
            }
            else
            {
              core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(
                0LL,
                v15);
            }
            core::ptr::drop_in_place<std::path::PathBuf>(&v21);
          }
        }
        v8 += 24LL;
      }
      while ( v30 != v8 );
    }
    return 0LL;
  }
  else
  {
    std::path::Path::to_path_buf(&v36, a3, a4);
    dest = &byte_6;
    return alloc::boxed::Box<T>::new(&dest);
  }
}