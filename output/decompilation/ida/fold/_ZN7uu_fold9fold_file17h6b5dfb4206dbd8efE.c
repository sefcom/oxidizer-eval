void *__fastcall uu_fold::fold_file(_QWORD *a1, unsigned int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r13
  char v4; // r15
  unsigned __int64 v5; // rbx
  __int64 v6; // rsi
  void *v7; // r14
  char code_point; // al
  unsigned int v10; // edx
  unsigned int v11; // ebp
  unsigned __int64 v12; // r12
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 (__fastcall *v15)(); // rdx
  __int64 v16; // rax
  __int64 (__fastcall *v17)(); // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 (__fastcall *v20)(); // rdx
  char **v22; // r8
  __int64 v23; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v24; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v25; // [rsp+18h] [rbp-D0h]
  __int64 *v26; // [rsp+20h] [rbp-C8h] BYREF
  __int64 (__fastcall *v27)(); // [rsp+28h] [rbp-C0h]
  __int64 **v28; // [rsp+30h] [rbp-B8h] BYREF
  __int64 (__fastcall *v29)(); // [rsp+38h] [rbp-B0h]
  void *v30; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+48h] [rbp-A0h]
  __int64 **v32; // [rsp+50h] [rbp-98h]
  __int64 v33; // [rsp+58h] [rbp-90h]
  __int64 v34; // [rsp+60h] [rbp-88h]
  _QWORD *v35; // [rsp+70h] [rbp-78h]
  __int64 v36; // [rsp+78h] [rbp-70h] BYREF
  __int64 v37; // [rsp+80h] [rbp-68h]
  __int64 v38; // [rsp+88h] [rbp-60h]
  unsigned int v39; // [rsp+94h] [rbp-54h]
  unsigned __int64 v40; // [rsp+98h] [rbp-50h]
  __int64 v41; // [rsp+A0h] [rbp-48h]
  _QWORD v42[8]; // [rsp+A8h] [rbp-40h] BYREF

  v40 = a3;
  v35 = a1;
  v36 = 0LL;
  v37 = 1LL;
  v38 = 0LL;
  v23 = 0LL;
  v24 = 1LL;
  v25 = 0LL;
  v39 = a2;
  v41 = a2;
  v4 = 0;
  v5 = 0LL;
  while ( 1 )
  {
    v6 = std::io::append_to_string(&v36, v35);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v30,
      v6);
    v7 = v30;
    if ( v30 || !v31 )
      break;
    v42[0] = v37;
    v42[1] = v37 + v38;
    while ( 1 )
    {
      code_point = core::str::validations::next_code_point(v42);
      v11 = v10;
      if ( (code_point & 1) == 0 )
        v11 = 1114112;
      if ( v11 == 10 )
        break;
      if ( v11 == 1114112 )
      {
        if ( !v25 )
          goto LABEL_2;
        goto LABEL_42;
      }
      if ( v5 >= v40 )
      {
        if ( (v4 & 1) != 0 )
        {
          ++v3;
          v12 = v25;
        }
        else
        {
          v12 = v25;
          v3 = v25;
        }
        v13 = v24;
        v14 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
                v3,
                v24,
                v12);
        if ( !v14 )
        {
          v22 = &off_E6C08;
          goto LABEL_45;
        }
        v26 = (__int64 *)v14;
        v27 = v15;
        v28 = &v26;
        v29 = <&T as core::fmt::Display>::fmt;
        v30 = &unk_E6BA0;
        v31 = 2LL;
        v34 = 0LL;
        v32 = (__int64 **)&v28;
        v33 = 1LL;
        std::io::stdio::_print(&v30);
        alloc::string::String::replace_range(&v23, v3);
        v5 = v25;
        v4 = 0;
      }
      switch ( v11 )
      {
        case 8u:
          if ( v5-- == 0 )
            v5 = 0LL;
          break;
        case 9u:
          v5 = (v5 & 0xFFFFFFFFFFFFFFF8LL) + 8;
          v12 = v25;
          if ( v5 > v40 )
          {
            if ( v25 )
            {
              ++v3;
              if ( (v4 & 1) == 0 )
                v3 = v25;
              v13 = v24;
              v16 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
                      v3,
                      v24,
                      v25);
              if ( !v16 )
              {
                v22 = &off_E6C20;
                goto LABEL_45;
              }
              v26 = (__int64 *)v16;
              v27 = v17;
              v28 = &v26;
              v29 = <&T as core::fmt::Display>::fmt;
              v30 = &unk_E6BA0;
              v31 = 2LL;
              v34 = 0LL;
              v32 = (__int64 **)&v28;
              v33 = 1LL;
              std::io::stdio::_print(&v30);
              alloc::string::String::replace_range(&v23, v3);
              v12 = v25;
            }
            else
            {
              v12 = 0LL;
            }
          }
          v3 = v12;
          v4 = v41;
          break;
        case 0xDu:
          v5 = 0LL;
          break;
        default:
          if ( (_BYTE)v39
            && (v11 <= 0x20 && (v18 = 0x100003800LL, _bittest64(&v18, v11))
             || v11 >= 0x80 && (unsigned __int8)core::unicode::unicode_data::white_space::lookup(v11)) )
          {
            v3 = v25;
            ++v5;
            v4 = 1;
          }
          else
          {
            ++v5;
          }
          break;
      }
      alloc::string::String::push(&v23, v11);
    }
    v13 = v24;
    v12 = v25;
    v19 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
            v25,
            v24,
            v25);
    if ( !v19 )
    {
      v3 = v12;
      v22 = &off_E6BF0;
LABEL_45:
      core::str::slice_error_fail(v13, v12, 0LL, v3, v22);
    }
    v26 = (__int64 *)v19;
    v27 = v20;
    v28 = &v26;
    v29 = <&T as core::fmt::Display>::fmt;
    v30 = &unk_E6BA0;
    v31 = 2LL;
    v34 = 0LL;
    v32 = (__int64 **)&v28;
    v33 = 1LL;
    std::io::stdio::_print(&v30);
    alloc::string::String::replace_range(&v23, v12);
    v4 = 0;
    v5 = v25;
    if ( v25 )
    {
LABEL_42:
      v26 = &v23;
      v27 = <alloc::string::String as core::fmt::Display>::fmt;
      v30 = &unk_17F60;
      v31 = 1LL;
      v34 = 0LL;
      v32 = &v26;
      v33 = 1LL;
      std::io::stdio::_print(&v30);
      alloc::string::String::truncate(&v23);
    }
LABEL_2:
    alloc::string::String::truncate(&v36);
  }
  core::ptr::drop_in_place<alloc::string::String>(v23, v24);
  core::ptr::drop_in_place<alloc::string::String>(v36, v37);
  core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&mut dyn std::io::Read>>(*v35, v35[1]);
  return v7;
}