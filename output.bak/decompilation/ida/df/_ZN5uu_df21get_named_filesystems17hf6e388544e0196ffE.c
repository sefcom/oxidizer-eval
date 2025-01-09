__int64 __fastcall uu_df::get_named_filesystems(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rsi
  __int128 v14; // rax
  __int64 v15; // rdi
  __int64 (__fastcall **v16)(); // rdx
  _OWORD *v17; // rcx
  __int64 v18; // rdi
  __int128 v19; // rax
  __int128 *v20; // [rsp+8h] [rbp-390h] BYREF
  __int64 (__fastcall **v21)(); // [rsp+10h] [rbp-388h]
  __int64 v22; // [rsp+18h] [rbp-380h] BYREF
  __int64 (__fastcall **v23)(); // [rsp+20h] [rbp-378h]
  __int128 v24; // [rsp+28h] [rbp-370h] BYREF
  __int64 *v25; // [rsp+38h] [rbp-360h]
  __int64 (__fastcall *v26)(); // [rsp+40h] [rbp-358h]
  __int128 v27; // [rsp+48h] [rbp-350h] BYREF
  __int64 v28; // [rsp+58h] [rbp-340h]
  char v29[8]; // [rsp+60h] [rbp-338h] BYREF
  __int64 v30; // [rsp+68h] [rbp-330h]
  __int64 v31; // [rsp+70h] [rbp-328h]
  _QWORD *v32; // [rsp+78h] [rbp-320h]
  _QWORD v33[2]; // [rsp+80h] [rbp-318h] BYREF
  __int128 v34; // [rsp+90h] [rbp-308h] BYREF
  __int64 *v35; // [rsp+A0h] [rbp-2F8h]
  __int64 (__fastcall *v36)(); // [rsp+A8h] [rbp-2F0h]
  __int64 v37; // [rsp+B0h] [rbp-2E8h]
  __int128 v38; // [rsp+140h] [rbp-258h] BYREF
  __int64 v39; // [rsp+150h] [rbp-248h]
  __int128 v40; // [rsp+158h] [rbp-240h] BYREF
  __int64 *v41; // [rsp+168h] [rbp-230h]
  _OWORD src[15]; // [rsp+170h] [rbp-228h] BYREF
  _BYTE v43[32]; // [rsp+260h] [rbp-138h] BYREF
  _BYTE dest[280]; // [rsp+280h] [rbp-118h] BYREF

  uucore::features::fsext::read_fs_list(src);
  result = *((_QWORD *)&src[0] + 1);
  v8 = *(_QWORD *)&src[1];
  if ( *(_QWORD *)&src[0] == 0x8000000000000000LL )
  {
    a1[1] = *((_QWORD *)&src[0] + 1);
    a1[2] = v8;
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    v38 = src[0];
    v39 = *(_QWORD *)&src[1];
    uu_df::filter_mount_list((__int64)&v34, (__int64)&v38, a4);
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v43, &v34);
    alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(
      v29,
      v43);
    *(_QWORD *)&v27 = 0LL;
    *((_QWORD *)&v27 + 1) = 8LL;
    v28 = 0LL;
    if ( v31 )
    {
      v32 = a1;
      v33[0] = a2;
      v33[1] = a2 + 8 * a3;
      v9 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v33);
      if ( v9 )
      {
        v10 = (_QWORD *)v9;
        do
        {
          v11 = v30;
          uu_df::filesystem::Filesystem::from_path(src, v30, v31, (__int64)v10);
          if ( *(_QWORD *)&src[0] == 0x8000000000000000LL )
          {
            v12 = <&T as core::convert::AsRef<U>>::as_ref(*v10, v11);
            std::fs::metadata(&v34, v12);
            v13 = *((_QWORD *)&v34 + 1);
            if ( (_QWORD)v34 == 2LL )
            {
              core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(
                2LL,
                *((_QWORD *)&v34 + 1));
              *(_QWORD *)&v14 = <&T as core::convert::AsRef<U>>::as_ref(*v10, v13);
              v24 = v14;
              v20 = &v24;
              v21 = (__int64 (__fastcall **)())<std::path::Display as core::fmt::Display>::fmt;
              *(_QWORD *)&v34 = &unk_13E9C8;
              *((_QWORD *)&v34 + 1) = 2LL;
              v37 = 0LL;
              v35 = (__int64 *)&v20;
              v36 = (__int64 (__fastcall *)())(&dword_0 + 1);
              core::option::Option<T>::map_or_else(&v40, &v34);
              LODWORD(v36) = 1;
              v34 = v40;
              v35 = v41;
            }
            else
            {
              core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(
                v34,
                *((_QWORD *)&v34 + 1));
              <T as alloc::slice::hack::ConvertVec>::to_vec(&v24);
              v35 = v25;
              v34 = v24;
              LODWORD(v36) = 1;
            }
            v22 = alloc::boxed::Box<T>::new(&v34);
            v23 = &off_13EA20;
            v15 = (unsigned int)<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v22);
            uucore::mods::error::set_exit_code(v15);
            v20 = (__int128 *)uucore::util_name();
            v21 = v16;
            *(_QWORD *)&v24 = &v20;
            *((_QWORD *)&v24 + 1) = <&T as core::fmt::Display>::fmt;
            v25 = &v22;
            v26 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            *(_QWORD *)&v34 = &unk_13E998;
            *((_QWORD *)&v34 + 1) = 3LL;
            v37 = 0LL;
            v35 = (__int64 *)&v24;
            v36 = (__int64 (__fastcall *)())(&dword_0 + 2);
            std::io::stdio::_eprint(&v34);
            core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Sync+core::marker::Send>>(
              v22,
              v23);
          }
          else
          {
            memcpy(dest, src, 0xE8uLL);
            alloc::vec::Vec<T,A>::push(&v27, dest);
          }
          v10 = (_QWORD *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v33);
        }
        while ( v10 );
      }
      v17 = v32;
      v32[2] = v28;
      *v17 = v27;
    }
    else
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v34);
      *(_QWORD *)&src[1] = v35;
      src[0] = v34;
      DWORD2(src[1]) = 1;
      v20 = (__int128 *)alloc::boxed::Box<T>::new(src);
      v21 = &off_13EA20;
      v18 = (unsigned int)<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v20);
      uucore::mods::error::set_exit_code(v18);
      *(_QWORD *)&v19 = uucore::util_name();
      v24 = v19;
      *(_QWORD *)&v34 = &v24;
      *((_QWORD *)&v34 + 1) = <&T as core::fmt::Display>::fmt;
      v35 = (__int64 *)&v20;
      v36 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      *(_QWORD *)&src[0] = &unk_13E998;
      *((_QWORD *)&src[0] + 1) = 3LL;
      *(_QWORD *)&src[2] = 0LL;
      *(_QWORD *)&src[1] = &v34;
      *((_QWORD *)&src[1] + 1) = 2LL;
      std::io::stdio::_eprint(src);
      core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Sync+core::marker::Send>>(
        v20,
        v21);
      a1[2] = v28;
      *(_OWORD *)a1 = v27;
    }
    return core::ptr::drop_in_place<alloc::vec::Vec<uucore::features::fsext::MountInfo>>(v29);
  }
  return result;
}
