__int64 __fastcall uu_df::get_named_filesystems(
        _QWORD *a1,
        __int64 (__fastcall **a2)(),
        __int64 a3,
        __int64 (__fastcall **a4)())
{
  __int64 (__fastcall **v5)(); // r12
  __int128 *v7; // rdi
  __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // r15
  __int128 v14; // rax
  unsigned int v15; // eax
  __int64 (__fastcall **v16)(); // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned int v19; // eax
  __int64 (__fastcall **v20)(); // rdx
  unsigned int v21; // eax
  __int64 v22; // rdx
  _OWORD *v23; // rcx
  _BYTE *v24; // [rsp+0h] [rbp-378h] BYREF
  __int64 (__fastcall **v25)(); // [rsp+8h] [rbp-370h]
  __int64 v26; // [rsp+10h] [rbp-368h] BYREF
  __int64 (__fastcall **v27)(); // [rsp+18h] [rbp-360h]
  __int128 v28; // [rsp+20h] [rbp-358h] BYREF
  __int64 v29; // [rsp+30h] [rbp-348h]
  _QWORD *v30; // [rsp+38h] [rbp-340h]
  __int64 (__fastcall **v31)(); // [rsp+40h] [rbp-338h]
  __int128 v32; // [rsp+48h] [rbp-330h] BYREF
  __int64 v33; // [rsp+58h] [rbp-320h]
  _BYTE v34[232]; // [rsp+60h] [rbp-318h] BYREF
  _BYTE dest[232]; // [rsp+148h] [rbp-230h] BYREF
  __int128 v36; // [rsp+230h] [rbp-148h] BYREF
  __int64 v37; // [rsp+240h] [rbp-138h]
  __int128 v38; // [rsp+248h] [rbp-130h] BYREF
  __int64 v39; // [rsp+258h] [rbp-120h]
  _QWORD src[35]; // [rsp+260h] [rbp-118h] BYREF

  v31 = a4;
  v5 = a2;
  v7 = (__int128 *)v34;
  uucore::features::fsext::read_fs_list(v34);
  v10 = *(_QWORD *)&v34[8];
  result = *(_QWORD *)v34;
  v11 = -*(_QWORD *)v34;
  v12 = *(_QWORD *)&v34[16];
  if ( __OFSUB__(-*(_QWORD *)v34, 1LL) )
  {
    a1[1] = *(_QWORD *)&v34[8];
    a1[2] = v12;
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    v30 = a1;
    v32 = *(_OWORD *)v34;
    v33 = *(_QWORD *)&v34[16];
    *(_QWORD *)&v28 = 0LL;
    *((_QWORD *)&v28 + 1) = 8LL;
    v29 = 0LL;
    if ( a3 )
    {
      v13 = 8 * a3;
      do
      {
        uu_df::filesystem::Filesystem::from_path(src, v10, v12, (__int64)v5);
        if ( src[0] == 0x8000000000000000LL )
        {
          if ( LOBYTE(src[1]) )
          {
            if ( LOBYTE(src[1]) == 1 )
            {
              *(_QWORD *)&v14 = <&T as core::convert::AsRef<U>>::as_ref(*v5);
              *(_OWORD *)dest = v14;
              v24 = dest;
              v25 = (__int64 (__fastcall **)())<std::path::Display as core::fmt::Display>::fmt;
              *(_QWORD *)v34 = &unk_101FE8;
              *(_QWORD *)&v34[8] = 2LL;
              *(_QWORD *)&v34[32] = 0LL;
              *(_QWORD *)&v34[16] = &v24;
              *(_QWORD *)&v34[24] = 1LL;
              core::option::Option<T>::map_or_else(&v36, v34);
              *(_DWORD *)&v34[24] = 1;
              *(_OWORD *)v34 = v36;
              *(_QWORD *)&v34[16] = v37;
            }
            else
            {
              <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(dest, aNoFileSystemsP, 25LL);
              *(_QWORD *)&v34[16] = *(_QWORD *)&dest[16];
              *(_OWORD *)v34 = *(_OWORD *)dest;
              *(_DWORD *)&v34[24] = 1;
            }
            v26 = alloc::boxed::Box<T>::new(v34);
            v27 = &off_102078;
            v15 = <uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v26);
            uucore::mods::error::set_exit_code(v15);
            v24 = (_BYTE *)uucore::util_name();
            v25 = v16;
            *(_QWORD *)dest = &v24;
            *(_QWORD *)&dest[8] = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)&dest[16] = &v26;
            *(_QWORD *)&dest[24] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            *(_QWORD *)v34 = &unk_102008;
            *(_QWORD *)&v34[8] = 3LL;
            *(_QWORD *)&v34[32] = 0LL;
            *(_QWORD *)&v34[16] = dest;
            *(_QWORD *)&v34[24] = 2LL;
            std::io::stdio::_eprint(v34);
            v7 = (__int128 *)v26;
            a2 = v27;
            core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
              v26,
              v27);
          }
          else
          {
            v17 = <&T as core::convert::AsRef<U>>::as_ref(*v5);
            *(_QWORD *)dest = 1LL;
            *(_QWORD *)&dest[8] = v17;
            *(_QWORD *)&dest[16] = v18;
            dest[24] = 1;
            v24 = dest;
            v25 = (__int64 (__fastcall **)())<os_display::Quoted as core::fmt::Display>::fmt;
            *(_QWORD *)v34 = &off_102038;
            *(_QWORD *)&v34[8] = 2LL;
            *(_QWORD *)&v34[32] = 0LL;
            *(_QWORD *)&v34[16] = &v24;
            *(_QWORD *)&v34[24] = 1LL;
            core::option::Option<T>::map_or_else(&v38, v34);
            *(_DWORD *)&v34[24] = 1;
            *(_OWORD *)v34 = v38;
            *(_QWORD *)&v34[16] = v39;
            v26 = alloc::boxed::Box<T>::new(v34);
            v27 = &off_102078;
            v19 = <uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v26);
            uucore::mods::error::set_exit_code(v19);
            v24 = (_BYTE *)uucore::util_name();
            v25 = v20;
            *(_QWORD *)dest = &v24;
            *(_QWORD *)&dest[8] = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)&dest[16] = &v26;
            *(_QWORD *)&dest[24] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            *(_QWORD *)v34 = &unk_102008;
            *(_QWORD *)&v34[8] = 3LL;
            *(_QWORD *)&v34[32] = 0LL;
            *(_QWORD *)&v34[16] = dest;
            *(_QWORD *)&v34[24] = 2LL;
            std::io::stdio::_eprint(v34);
            v7 = (__int128 *)v26;
            a2 = v27;
            core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
              v26,
              v27);
          }
        }
        else
        {
          memcpy(dest, src, sizeof(dest));
          a2 = v31;
          if ( (unsigned __int8)uu_df::is_included(dest, v31) )
          {
            memcpy(v34, dest, sizeof(v34));
            v7 = &v28;
            a2 = (__int64 (__fastcall **)())v34;
            alloc::vec::Vec<T,A>::push(&v28, v34);
          }
          else
          {
            v7 = (__int128 *)dest;
            core::ptr::drop_in_place<uu_df::filesystem::Filesystem>(dest);
          }
        }
        ++v5;
        v13 -= 8LL;
      }
      while ( v13 );
    }
    if ( !(unsigned int)uucore::mods::error::get_exit_code(v7, a2, v8, v11) && !v29 )
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(dest, aNoFileSystemsP, 25LL);
      *(_QWORD *)&v34[16] = *(_QWORD *)&dest[16];
      *(_OWORD *)v34 = *(_OWORD *)dest;
      *(_DWORD *)&v34[24] = 1;
      v24 = (_BYTE *)alloc::boxed::Box<T>::new(v34);
      v25 = &off_102078;
      v21 = <uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v24);
      uucore::mods::error::set_exit_code(v21);
      src[0] = uucore::util_name();
      src[1] = v22;
      *(_QWORD *)dest = src;
      *(_QWORD *)&dest[8] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&dest[16] = &v24;
      *(_QWORD *)&dest[24] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      *(_QWORD *)v34 = &unk_102008;
      *(_QWORD *)&v34[8] = 3LL;
      *(_QWORD *)&v34[32] = 0LL;
      *(_QWORD *)&v34[16] = dest;
      *(_QWORD *)&v34[24] = 2LL;
      std::io::stdio::_eprint(v34);
      core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v24, v25);
    }
    v23 = v30;
    v30[2] = v29;
    *v23 = v28;
    return core::ptr::drop_in_place<alloc::vec::Vec<uucore::features::fsext::MountInfo>>(&v32);
  }
  return result;
}