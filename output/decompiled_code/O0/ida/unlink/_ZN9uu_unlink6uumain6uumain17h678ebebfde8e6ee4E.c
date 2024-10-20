__int64 __fastcall uu_unlink::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  int v4; // eax
  struct _Unwind_Exception *v5; // rdx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  __int64 v10; // [rsp+0h] [rbp-508h]
  int v11; // [rsp+0h] [rbp-508h]
  int v12; // [rsp+8h] [rbp-500h]
  int v13; // [rsp+8h] [rbp-500h]
  struct _Unwind_Exception *v14; // [rsp+10h] [rbp-4F8h]
  int v15; // [rsp+10h] [rbp-4F8h]
  int v16; // [rsp+18h] [rbp-4F0h]
  int v17[2]; // [rsp+18h] [rbp-4F0h]
  struct _Unwind_Exception *v18; // [rsp+20h] [rbp-4E8h]
  int v19; // [rsp+28h] [rbp-4E0h]
  __int64 v20; // [rsp+28h] [rbp-4E0h]
  __int64 one; // [rsp+58h] [rbp-4B0h]
  __int64 v22; // [rsp+70h] [rbp-498h]
  _OWORD v23[6]; // [rsp+80h] [rbp-488h] BYREF
  __int64 v24; // [rsp+E0h] [rbp-428h]
  __int128 v25; // [rsp+E8h] [rbp-420h] BYREF
  __int128 v26; // [rsp+F8h] [rbp-410h]
  __int128 v27; // [rsp+108h] [rbp-400h]
  __int128 v28; // [rsp+118h] [rbp-3F0h]
  __int128 v29; // [rsp+128h] [rbp-3E0h]
  __int128 v30; // [rsp+138h] [rbp-3D0h]
  __int64 v31; // [rsp+148h] [rbp-3C0h]
  int v32[26]; // [rsp+150h] [rbp-3B8h] BYREF
  int dest[178]; // [rsp+1B8h] [rbp-350h] BYREF
  __int128 v34; // [rsp+480h] [rbp-88h]
  __int128 v35; // [rsp+490h] [rbp-78h]
  __int128 v36; // [rsp+4A0h] [rbp-68h]
  __int128 v37; // [rsp+4B0h] [rbp-58h]
  __int128 v38; // [rsp+4C0h] [rbp-48h]
  __int128 v39; // [rsp+4D0h] [rbp-38h]
  __int64 v40; // [rsp+4E0h] [rbp-28h]
  char v41; // [rsp+4EFh] [rbp-19h]
  __int64 v42; // [rsp+500h] [rbp-8h]

  v41 = 1;
  uu_unlink::uu_app(dest);
  v41 = 0;
  clap_builder::builder::command::Command::try_get_matches_from((int)v32, (int)dest, a1, a2, v2, v3, v10, v12, v14, v16);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v25, v32);
  if ( (_QWORD)v25 == 0x8000000000000000LL )
    return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             *((_QWORD *)&v25 + 1),
             &off_FC010);
  v40 = v31;
  v39 = v30;
  v38 = v29;
  v37 = v28;
  v36 = v27;
  v35 = v26;
  v34 = v25;
  v24 = v31;
  v23[5] = v30;
  v23[4] = v29;
  v23[3] = v28;
  v23[2] = v27;
  v23[1] = v26;
  v23[0] = v25;
  one = clap_builder::parser::matches::arg_matches::ArgMatches::get_one(
          v23,
          aFile,
          *(&uu_unlink::OPT_PATH + 1),
          &off_FBFE0);
  v42 = one;
  if ( !one )
    core::option::unwrap_failed(&off_FBFF8);
  v4 = std::path::<impl core::convert::AsRef<std::path::Path> for std::ffi::os_str::OsString>::as_ref(v42);
  v20 = std::fs::remove_file(v4, (int)v5, (int)v5, v6, v7, v8, v11, v13, v15, v4, v5, v19);
  v22 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
          v20,
          *(_QWORD *)v17,
          v18);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v23);
  return v22;
}
