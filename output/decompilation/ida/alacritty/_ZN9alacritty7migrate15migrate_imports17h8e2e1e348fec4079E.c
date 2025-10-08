__int64 __fastcall alacritty::migrate::migrate_imports(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int128 *v11; // r15
  __int64 i; // rax
  __int64 v13; // rdx
  __int128 *v14; // rbp
  __int64 v15; // r12
  __int64 v16; // rbx
  int v17; // r15d
  __int64 result; // rax
  __int128 v19; // xmm0
  char v20; // [rsp+7h] [rbp-191h]
  __int64 v21; // [rsp+8h] [rbp-190h]
  __int64 v22; // [rsp+10h] [rbp-188h]
  __int64 v23; // [rsp+28h] [rbp-170h]
  _OWORD v26[2]; // [rsp+40h] [rbp-158h] BYREF
  __int64 v27; // [rsp+60h] [rbp-138h]
  _BYTE v28[8]; // [rsp+68h] [rbp-130h] BYREF
  __int64 v29; // [rsp+70h] [rbp-128h]
  __int64 v30; // [rsp+78h] [rbp-120h]
  _QWORD v31[2]; // [rsp+80h] [rbp-118h] BYREF
  __int128 v32; // [rsp+90h] [rbp-108h] BYREF
  __int64 v33; // [rsp+A0h] [rbp-F8h]
  char **dest; // [rsp+B8h] [rbp-E0h] BYREF
  __int128 v35; // [rsp+C0h] [rbp-D8h]
  __int128 v36; // [rsp+D0h] [rbp-C8h]
  __int64 v37; // [rsp+E0h] [rbp-B8h]

  v7 = <toml_edit::document::DocumentMut as core::ops::deref::Deref>::deref(a5);
  v8 = toml_edit::table::Table::get(v7, aGeneral, 7LL);
  if ( !v8 || (v9 = toml_edit::item::Item::get(v8)) == 0 || *(_DWORD *)v9 != 7 || !*(_QWORD *)(v9 + 48) )
  {
LABEL_17:
    result = 0x8000000000000000LL;
    *a1 = 0x8000000000000000LL;
    return result;
  }
  if ( !a6 )
    return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, aExceededMaximu_0);
  v21 = <&toml_edit::array::Array as core::iter::traits::collect::IntoIterator>::into_iter(v9 + 8);
  v22 = v10;
  v23 = a6 - 1;
  v20 = *(_BYTE *)(a2 + 24);
  v11 = &v32;
  for ( i = core::iter::traits::iterator::Iterator::try_fold(v21, v10);
        ;
        i = core::iter::traits::iterator::Iterator::try_fold(v21, v22) )
  {
    if ( !i )
    {
      core::ptr::drop_in_place<core::iter::adapters::filter_map::FilterMap<alloc::boxed::Box<dyn core::iter::traits::iterator::Iterator+Item = &toml_edit::value::Value>,alacritty::migrate::migrate_imports::{{closure}}>>(
        v21,
        v22);
      goto LABEL_17;
    }
    alacritty::config::normalize_import((__int64)v28, a3, a4, i, v13);
    v14 = v11;
    v15 = v29;
    v16 = v30;
    std::fs::metadata(&dest);
    v17 = (int)dest;
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&dest);
    if ( v17 == 2 )
    {
      v11 = v14;
      if ( (v20 & 1) != 0 )
      {
        *(_QWORD *)&v32 = v15;
        *((_QWORD *)&v32 + 1) = v16;
        *(_QWORD *)&v26[0] = v14;
        *((_QWORD *)&v26[0] + 1) = <std::path::Display as core::fmt::Display>::fmt;
        dest = &off_883520;
        *(_QWORD *)&v35 = 2LL;
        *((_QWORD *)&v35 + 1) = v26;
        v36 = 1uLL;
        std::io::stdio::_print(&dest);
        v11 = v14;
      }
      goto LABEL_8;
    }
    alacritty::migrate::migrate_config((__int64)&dest, a2, v15, v16, v23);
    if ( (_DWORD)dest == 1 )
      break;
    v26[0] = v35;
    v26[1] = v36;
    v27 = v37;
    v11 = v14;
    if ( (v20 & 1) != 0 )
    {
      alacritty::migrate::Migration::success_message(v14, v26, 1LL);
      v31[0] = v14;
      v31[1] = <alloc::string::String as core::fmt::Display>::fmt;
      dest = (char **)&unk_882F40;
      *(_QWORD *)&v35 = 2LL;
      *((_QWORD *)&v35 + 1) = v31;
      v36 = 1uLL;
      std::io::stdio::_print(&dest);
      core::ptr::drop_in_place<alloc::string::String>(v14);
    }
    core::ptr::drop_in_place<alacritty::migrate::Migration>(v26);
LABEL_8:
    core::mem::drop(v28);
  }
  v33 = v36;
  v19 = v35;
  v32 = v35;
  a1[2] = v36;
  *(_OWORD *)a1 = v19;
  core::mem::drop(v28);
  return core::ptr::drop_in_place<core::iter::adapters::filter_map::FilterMap<alloc::boxed::Box<dyn core::iter::traits::iterator::Iterator+Item = &toml_edit::value::Value>,alacritty::migrate::migrate_imports::{{closure}}>>(
           v21,
           v22);
}