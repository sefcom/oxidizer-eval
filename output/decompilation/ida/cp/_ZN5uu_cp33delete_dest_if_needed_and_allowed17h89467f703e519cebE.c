__int64 __fastcall uu_cp::delete_dest_if_needed_and_allowed(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6,
        unsigned __int8 a7,
        __int64 a8)
{
  int v8; // eax
  __int64 v9; // r14
  __int64 v10; // r15
  char is_symlink_loop; // al
  __int64 result; // rax
  __int64 v13; // r12
  __int64 v14; // r13
  unsigned __int8 v15; // al
  __int64 v17; // r15
  __int64 inner; // rax
  _QWORD v19[2]; // [rsp+0h] [rbp-218h] BYREF
  __int128 v20; // [rsp+10h] [rbp-208h]
  __int64 v21; // [rsp+20h] [rbp-1F8h]
  __int128 v22; // [rsp+28h] [rbp-1F0h] BYREF
  __int64 v23; // [rsp+38h] [rbp-1E0h]
  _QWORD v24[3]; // [rsp+40h] [rbp-1D8h] BYREF
  char v25; // [rsp+58h] [rbp-1C0h]
  _QWORD v26[6]; // [rsp+60h] [rbp-1B8h] BYREF
  int dest; // [rsp+90h] [rbp-188h] BYREF
  __int128 v28; // [rsp+98h] [rbp-180h]
  __int64 v29; // [rsp+A8h] [rbp-170h]
  __int64 v30; // [rsp+B0h] [rbp-168h]
  __int128 v31; // [rsp+B8h] [rbp-160h]
  __int128 v32; // [rsp+C8h] [rbp-150h]
  __int128 v33; // [rsp+D8h] [rbp-140h]
  __int128 v34; // [rsp+E8h] [rbp-130h]
  __int128 v35; // [rsp+F8h] [rbp-120h]
  __int128 v36; // [rsp+108h] [rbp-110h]
  __int128 v37; // [rsp+118h] [rbp-100h]
  __int128 v38; // [rsp+140h] [rbp-D8h]
  __int64 v39; // [rsp+150h] [rbp-C8h]
  __int128 v40; // [rsp+160h] [rbp-B8h] BYREF
  __int64 v41; // [rsp+170h] [rbp-A8h]
  __int64 v42; // [rsp+178h] [rbp-A0h]
  __int128 v43; // [rsp+180h] [rbp-98h]
  __int128 v44; // [rsp+190h] [rbp-88h]
  __int128 v45; // [rsp+1A0h] [rbp-78h]
  __int128 v46; // [rsp+1B0h] [rbp-68h]
  __int128 v47; // [rsp+1C0h] [rbp-58h]
  __int128 v48; // [rsp+1D0h] [rbp-48h]
  __int128 v49; // [rsp+1E0h] [rbp-38h]

  if ( a6[84] >= 2u )
    goto LABEL_17;
  v8 = (unsigned __int8)a6[85];
  if ( v8 == 2 )
  {
    if ( !a6[80] )
      goto LABEL_17;
    v13 = a4;
    v14 = a5;
    v15 = a6[89];
    if ( !(v15 | a7 ^ 1) )
      v15 = a6[88];
    uucore::features::fs::FileInformation::from_path(&dest, a2, a3, v15);
    v24[0] = 1LL;
    v24[1] = a2;
    v24[2] = a3;
    v25 = 1;
    v19[0] = v24;
    v19[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v26[0] = &off_15EC38;
    v26[1] = 1LL;
    v26[4] = 0LL;
    v26[2] = v19;
    v26[3] = 1LL;
    core::option::Option<T>::map_or_else(&v22, v26);
    if ( (dest & 1) != 0 )
    {
      result = v28;
      *(_QWORD *)(a1 + 24) = v23;
      *(_OWORD *)(a1 + 8) = v22;
      *(_QWORD *)a1 = 0x8000000000000002LL;
      *(_QWORD *)(a1 + 32) = result;
      return result;
    }
    v21 = v29;
    v20 = v28;
    v17 = v30;
    v43 = v31;
    v44 = v32;
    v45 = v33;
    v46 = v34;
    v47 = v35;
    v48 = v36;
    v49 = v37;
    core::ptr::drop_in_place<<core::result::Result<(),std::io::error::Error> as quick_error::ResultExt<(),std::io::error::Error>>::context<alloc::string::String>::{{closure}}>(&v22);
    v39 = v21;
    v38 = v20;
    v40 = v20;
    v41 = v21;
    v42 = v17;
    inner = hashbrown::map::HashMap<K,V,S,A>::get_inner(a8, &v40);
    a5 = v14;
    a4 = v13;
    if ( !inner )
      goto LABEL_17;
    goto LABEL_15;
  }
  if ( v8 == 1 )
    goto LABEL_15;
  v9 = a5;
  v10 = a4;
  is_symlink_loop = uucore::features::fs::is_symlink_loop(a4, a5);
  a4 = v10;
  a5 = v9;
  if ( is_symlink_loop )
    goto LABEL_15;
  std::fs::metadata(&dest);
  if ( dest == 2 )
  {
    result = v28;
LABEL_16:
    *(_QWORD *)a1 = 0x8000000000000001LL;
    *(_QWORD *)(a1 + 8) = result;
    return result;
  }
  a5 = v9;
  a4 = v10;
  if ( (v32 & 0x92) == 0 )
  {
LABEL_15:
    result = std::fs::remove_file(a4, a5);
    if ( result )
      goto LABEL_16;
  }
LABEL_17:
  result = 0x800000000000000CLL;
  *(_QWORD *)a1 = 0x800000000000000CLL;
  return result;
}