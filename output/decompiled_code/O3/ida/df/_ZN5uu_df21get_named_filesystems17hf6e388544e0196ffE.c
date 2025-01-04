__int64 __fastcall uu_df::get_named_filesystems(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rsi
  __int128 v13; // rax
  unsigned int v14; // eax
  __int64 (__fastcall **v15)(); // rdx
  _OWORD *v16; // rcx
  unsigned int v17; // eax
  __int128 v18; // rax
  __int128 *v19; // [rsp+8h] [rbp-390h] BYREF
  __int64 (__fastcall **v20)(); // [rsp+10h] [rbp-388h]
  __int64 v21; // [rsp+18h] [rbp-380h] BYREF
  __int64 (__fastcall **v22)(); // [rsp+20h] [rbp-378h]
  __int128 v23; // [rsp+28h] [rbp-370h] BYREF
  __int64 *v24; // [rsp+38h] [rbp-360h]
  __int64 (__fastcall *v25)(); // [rsp+40h] [rbp-358h]
  __int128 v26; // [rsp+48h] [rbp-350h] BYREF
  __int64 v27; // [rsp+58h] [rbp-340h]
  char v28[8]; // [rsp+60h] [rbp-338h] BYREF
  __int64 v29; // [rsp+68h] [rbp-330h]
  __int64 v30; // [rsp+70h] [rbp-328h]
  _QWORD *v31; // [rsp+78h] [rbp-320h]
  _QWORD v32[2]; // [rsp+80h] [rbp-318h] BYREF
  __int128 v33; // [rsp+90h] [rbp-308h] BYREF
  __int64 *v34; // [rsp+A0h] [rbp-2F8h]
  __int64 (__fastcall *v35)(); // [rsp+A8h] [rbp-2F0h]
  __int64 v36; // [rsp+B0h] [rbp-2E8h]
  __int128 v37; // [rsp+140h] [rbp-258h] BYREF
  __int64 v38; // [rsp+150h] [rbp-248h]
  __int128 v39; // [rsp+158h] [rbp-240h] BYREF
  __int64 *v40; // [rsp+168h] [rbp-230h]
  _OWORD src[15]; // [rsp+170h] [rbp-228h] BYREF
  _BYTE v42[32]; // [rsp+260h] [rbp-138h] BYREF
  _BYTE dest[280]; // [rsp+280h] [rbp-118h] BYREF

  uucore::features::fsext::read_fs_list(src);
  result = *((_QWORD *)&src[0] + 1);
  v7 = *(_QWORD *)&src[1];
  if ( *(_QWORD *)&src[0] == 0x8000000000000000LL )
  {
    a1[1] = *((_QWORD *)&src[0] + 1);
    a1[2] = v7;
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    v37 = src[0];
    v38 = *(_QWORD *)&src[1];
    uu_df::filter_mount_list(&v33, &v37, a4);
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v42, &v33);
    alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(
      v28,
      v42);
    *(_QWORD *)&v26 = 0LL;
    *((_QWORD *)&v26 + 1) = 8LL;
    v27 = 0LL;
    if ( v30 )
    {
      v31 = a1;
      v32[0] = a2;
      v32[1] = a2 + 8 * a3;
      v8 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v32);
      if ( v8 )
      {
        v9 = (_QWORD *)v8;
        do
        {
          v10 = v29;
          uu_df::filesystem::Filesystem::from_path(src);
          if ( *(_QWORD *)&src[0] == 0x8000000000000000LL )
          {
            v11 = <&T as core::convert::AsRef<U>>::as_ref(*v9, v10);
            std::fs::metadata(&v33, v11);
            v12 = *((_QWORD *)&v33 + 1);
            if ( (_QWORD)v33 == 2LL )
            {
              core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(
                2LL,
                *((_QWORD *)&v33 + 1));
              *(_QWORD *)&v13 = <&T as core::convert::AsRef<U>>::as_ref(*v9, v12);
              v23 = v13;
              v19 = &v23;
              v20 = (__int64 (__fastcall **)())<std::path::Display as core::fmt::Display>::fmt;
              *(_QWORD *)&v33 = &unk_13E9C8;
              *((_QWORD *)&v33 + 1) = 2LL;
              v36 = 0LL;
              v34 = (__int64 *)&v19;
              v35 = (__int64 (__fastcall *)())(&dword_0 + 1);
              core::option::Option<T>::map_or_else(&v39, &v33);
              LODWORD(v35) = 1;
              v33 = v39;
              v34 = v40;
            }
            else
            {
              core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(
                v33,
                *((_QWORD *)&v33 + 1));
              <T as alloc::slice::hack::ConvertVec>::to_vec(&v23);
              v34 = v24;
              v33 = v23;
              LODWORD(v35) = 1;
            }
            v21 = alloc::boxed::Box<T>::new(&v33);
            v22 = &off_13EA20;
            v14 = <uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v21);
            uucore::mods::error::set_exit_code(v14);
            v19 = (__int128 *)uucore::util_name();
            v20 = v15;
            *(_QWORD *)&v23 = &v19;
            *((_QWORD *)&v23 + 1) = <&T as core::fmt::Display>::fmt;
            v24 = &v21;
            v25 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            *(_QWORD *)&v33 = &unk_13E998;
            *((_QWORD *)&v33 + 1) = 3LL;
            v36 = 0LL;
            v34 = (__int64 *)&v23;
            v35 = (__int64 (__fastcall *)())(&dword_0 + 2);
            std::io::stdio::_eprint(&v33);
            core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Sync+core::marker::Send>>(
              v21,
              v22);
          }
          else
          {
            memcpy(dest, src, 0xE8uLL);
            alloc::vec::Vec<T,A>::push(&v26, dest);
          }
          v9 = (_QWORD *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v32);
        }
        while ( v9 );
      }
      v16 = v31;
      v31[2] = v27;
      *v16 = v26;
    }
    else
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v33);
      *(_QWORD *)&src[1] = v34;
      src[0] = v33;
      DWORD2(src[1]) = 1;
      v19 = (__int128 *)alloc::boxed::Box<T>::new(src);
      v20 = &off_13EA20;
      v17 = <uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v19);
      uucore::mods::error::set_exit_code(v17);
      *(_QWORD *)&v18 = uucore::util_name();
      v23 = v18;
      *(_QWORD *)&v33 = &v23;
      *((_QWORD *)&v33 + 1) = <&T as core::fmt::Display>::fmt;
      v34 = (__int64 *)&v19;
      v35 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      *(_QWORD *)&src[0] = &unk_13E998;
      *((_QWORD *)&src[0] + 1) = 3LL;
      *(_QWORD *)&src[2] = 0LL;
      *(_QWORD *)&src[1] = &v33;
      *((_QWORD *)&src[1] + 1) = 2LL;
      std::io::stdio::_eprint(src);
      core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Sync+core::marker::Send>>(
        v19,
        v20);
      a1[2] = v27;
      *(_OWORD *)a1 = v26;
    }
    return core::ptr::drop_in_place<alloc::vec::Vec<uucore::features::fsext::MountInfo>>(v28);
  }
  return result;
}
