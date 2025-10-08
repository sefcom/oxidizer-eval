__int64 __fastcall just::search::Search::find(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  unsigned __int64 v6; // r10
  __int64 result; // rax
  __int128 v11; // xmm0
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int128 v19; // xmm0
  __int128 *v20; // rdi
  _BYTE v21[24]; // [rsp+0h] [rbp-D8h] BYREF
  __int128 v22; // [rsp+18h] [rbp-C0h]
  __int64 v23; // [rsp+28h] [rbp-B0h]
  __int128 v24; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+40h] [rbp-98h]
  _BYTE v26[24]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v27; // [rsp+68h] [rbp-70h]
  __int128 v28; // [rsp+70h] [rbp-68h] BYREF
  __int64 v29; // [rsp+80h] [rbp-58h]
  __int64 v30; // [rsp+88h] [rbp-50h]
  _BYTE v31[8]; // [rsp+90h] [rbp-48h] BYREF
  __int64 v32; // [rsp+98h] [rbp-40h]
  __int64 v33; // [rsp+A0h] [rbp-38h]

  v6 = 4LL;
  if ( (*a6 ^ 0x8000000000000000LL) < 4 )
    v6 = *a6 ^ 0x8000000000000000LL;
  switch ( v6 )
  {
    case 0uLL:
      return just::search::Search::find_in_directory(a1);
    case 1uLL:
      just::search::Search::clean(v31, a4, a5, a6[2], a6[3]);
      just::search::Search::justfile(v21, a2, a3, v32, v33);
      v17 = *(_QWORD *)v21;
      *(_OWORD *)v26 = *(_OWORD *)&v21[8];
      *(_QWORD *)&v26[16] = v22;
      if ( *(_QWORD *)v21 == 0x8000000000000006LL )
      {
        v25 = *(_QWORD *)&v26[16];
        v24 = *(_OWORD *)v26;
        just::search::Search::working_directory_from_justfile(v21, *(_QWORD *)&v26[8]);
        v18 = *(_QWORD *)v21;
        *(_OWORD *)v26 = *(_OWORD *)&v21[8];
        *(_QWORD *)&v26[16] = v22;
        if ( *(_QWORD *)v21 == 0x8000000000000006LL )
        {
          v23 = *(_QWORD *)&v26[16];
          v22 = *(_OWORD *)v26;
          *(_QWORD *)&v21[16] = v25;
          v19 = v24;
          *(_OWORD *)v21 = v24;
          *(_QWORD *)(a1 + 32) = *(_QWORD *)&v26[8];
          *(_QWORD *)(a1 + 40) = v23;
          *(_QWORD *)(a1 + 16) = *(_QWORD *)&v21[16];
          *(_QWORD *)(a1 + 24) = v22;
          *(_OWORD *)a1 = v19;
        }
        else
        {
          *(_QWORD *)(a1 + 32) = *(_QWORD *)&v26[16];
          *(_OWORD *)(a1 + 16) = *(_OWORD *)v26;
          *(_QWORD *)(a1 + 8) = v18;
          *(_QWORD *)a1 = 0x8000000000000000LL;
          core::ptr::drop_in_place<std::path::PathBuf>(&v24);
        }
      }
      else
      {
        *(_QWORD *)(a1 + 32) = *(_QWORD *)&v26[16];
        *(_OWORD *)(a1 + 16) = *(_OWORD *)v26;
        *(_QWORD *)(a1 + 8) = v17;
        *(_QWORD *)a1 = 0x8000000000000000LL;
      }
      v20 = (__int128 *)v31;
      return core::ptr::drop_in_place<std::path::PathBuf>(v20);
    case 2uLL:
      v30 = a5;
      just::search::Search::find_global_justfile(v26);
      result = *(_QWORD *)v26;
      v28 = *(_OWORD *)&v26[8];
      v29 = v27;
      if ( *(_QWORD *)v26 != 0x8000000000000006LL )
      {
        *(_QWORD *)(a1 + 32) = v29;
        *(_OWORD *)(a1 + 16) = v28;
        *(_QWORD *)(a1 + 8) = result;
        *(_QWORD *)a1 = 0x8000000000000000LL;
        return result;
      }
      just::search::Search::project_root(v26, a2, a3, a4, v30);
      v14 = *(_QWORD *)v26;
      v24 = *(_OWORD *)&v26[8];
      v25 = v27;
      if ( *(_QWORD *)v26 == 0x8000000000000006LL )
      {
        v23 = v25;
        v22 = v24;
        *(_QWORD *)&v21[16] = v29;
        *(_OWORD *)v21 = v28;
        *(_OWORD *)a1 = v28;
        *(_QWORD *)(a1 + 32) = *((_QWORD *)&v22 + 1);
        *(_QWORD *)(a1 + 40) = v23;
        *(_QWORD *)(a1 + 16) = *(_QWORD *)&v21[16];
        result = v22;
        *(_QWORD *)(a1 + 24) = v22;
        return result;
      }
      *(_QWORD *)(a1 + 32) = v25;
      *(_OWORD *)(a1 + 16) = v24;
      *(_QWORD *)(a1 + 8) = v14;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      v20 = &v28;
      return core::ptr::drop_in_place<std::path::PathBuf>(v20);
    case 3uLL:
      just::search::Search::clean(&v24, a4, a5, a6[2], a6[3]);
      just::search::Search::working_directory_from_justfile(v21, *((_QWORD *)&v24 + 1));
      v15 = *(_QWORD *)v21;
      *(_OWORD *)v26 = *(_OWORD *)&v21[8];
      *(_QWORD *)&v26[16] = v22;
      if ( *(_QWORD *)v21 == 0x8000000000000006LL )
      {
        v23 = *(_QWORD *)&v26[16];
        v22 = *(_OWORD *)v26;
        *(_QWORD *)&v21[16] = v25;
        v11 = v24;
        *(_OWORD *)v21 = v24;
LABEL_11:
        *(_QWORD *)(a1 + 32) = *((_QWORD *)&v22 + 1);
        *(_QWORD *)(a1 + 40) = v23;
        *(_QWORD *)(a1 + 16) = *(_QWORD *)&v21[16];
        result = v22;
        *(_QWORD *)(a1 + 24) = v22;
        *(_OWORD *)a1 = v11;
      }
      else
      {
        *(_QWORD *)(a1 + 32) = *(_QWORD *)&v26[16];
        *(_OWORD *)(a1 + 16) = *(_OWORD *)v26;
        *(_QWORD *)(a1 + 8) = v15;
        *(_QWORD *)a1 = 0x8000000000000000LL;
        v20 = &v24;
        return core::ptr::drop_in_place<std::path::PathBuf>(v20);
      }
      return result;
    case 4uLL:
      just::search::Search::clean(&v24, a4, a5, a6[1], a6[2]);
      just::search::Search::clean(v26, a4, a5, a6[4], a6[5]);
      *(_QWORD *)&v21[16] = v25;
      v11 = v24;
      *(_OWORD *)v21 = v24;
      v22 = *(_OWORD *)v26;
      v23 = *(_QWORD *)&v26[16];
      goto LABEL_11;
  }
}