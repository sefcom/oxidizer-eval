unsigned __int64 __fastcall just::search::Search::init(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 result; // rax
  unsigned __int64 v7; // r10
  __int128 v10; // xmm0
  __int64 v11; // rax
  __int64 v14; // rax
  __int128 *v15; // rdi
  _BYTE v16[24]; // [rsp+0h] [rbp-D8h] BYREF
  __int128 v17; // [rsp+18h] [rbp-C0h]
  __int64 v18; // [rsp+28h] [rbp-B0h]
  __int128 v19; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+40h] [rbp-98h]
  __int128 v21; // [rsp+50h] [rbp-88h] BYREF
  __int64 v22; // [rsp+60h] [rbp-78h]
  _BYTE v23[8]; // [rsp+68h] [rbp-70h] BYREF
  __int64 v24; // [rsp+70h] [rbp-68h]
  __int64 v25; // [rsp+78h] [rbp-60h]
  __int128 v26; // [rsp+80h] [rbp-58h] BYREF
  __int64 v27; // [rsp+90h] [rbp-48h]
  __int128 v28; // [rsp+98h] [rbp-40h] BYREF
  __int64 v29; // [rsp+A8h] [rbp-30h]

  result = *a2 ^ 0x8000000000000000LL;
  v7 = 4LL;
  if ( result < 4 )
    v7 = *a2 ^ 0x8000000000000000LL;
  switch ( v7 )
  {
    case 0uLL:
      just::search::Search::project_root(v16, a5, a6, a3, a4);
      result = *(_QWORD *)v16;
      v21 = *(_OWORD *)&v16[8];
      v22 = v17;
      if ( *(_QWORD *)v16 == 0x8000000000000006LL )
      {
        v20 = v22;
        v19 = v21;
        std::path::Path::join(&v26, *((_QWORD *)&v21 + 1), v22, aJustfile_0, 8LL);
        v18 = v20;
        v17 = v19;
        *(_QWORD *)&v16[16] = v27;
        *(_OWORD *)v16 = v26;
        *(_OWORD *)a1 = v26;
        *(_QWORD *)(a1 + 32) = *((_QWORD *)&v17 + 1);
        *(_QWORD *)(a1 + 40) = v18;
        *(_QWORD *)(a1 + 16) = *(_QWORD *)&v16[16];
        result = v17;
        *(_QWORD *)(a1 + 24) = v17;
      }
      else
      {
        *(_QWORD *)(a1 + 32) = v22;
        *(_OWORD *)(a1 + 16) = v21;
        *(_QWORD *)(a1 + 8) = result;
        *(_QWORD *)a1 = 0x8000000000000000LL;
      }
      return result;
    case 1uLL:
      just::search::Search::clean(v23, a3, a4, a2[2], a2[3]);
      just::search::Search::project_root(v16, a5, a6, v24, v25);
      v14 = *(_QWORD *)v16;
      v21 = *(_OWORD *)&v16[8];
      v22 = v17;
      if ( *(_QWORD *)v16 == 0x8000000000000006LL )
      {
        v20 = v22;
        v19 = v21;
        std::path::Path::join(&v28, *((_QWORD *)&v21 + 1), v22, aJustfile_0, 8LL);
        v18 = v20;
        v17 = v19;
        *(_QWORD *)&v16[16] = v29;
        *(_OWORD *)v16 = v28;
        *(_OWORD *)a1 = v28;
        *(_QWORD *)(a1 + 32) = *((_QWORD *)&v17 + 1);
        *(_QWORD *)(a1 + 40) = v18;
        *(_QWORD *)(a1 + 16) = *(_QWORD *)&v16[16];
        *(_QWORD *)(a1 + 24) = v17;
      }
      else
      {
        *(_QWORD *)(a1 + 32) = v22;
        *(_OWORD *)(a1 + 16) = v21;
        *(_QWORD *)(a1 + 8) = v14;
        *(_QWORD *)a1 = 0x8000000000000000LL;
      }
      v15 = (__int128 *)v23;
      return core::ptr::drop_in_place<std::path::PathBuf>(v15);
    case 2uLL:
      *(_QWORD *)(a1 + 8) = 0x8000000000000000LL;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      return result;
    case 3uLL:
      just::search::Search::clean(&v19, a3, a4, a2[2], a2[3]);
      just::search::Search::working_directory_from_justfile(v16, *((_QWORD *)&v19 + 1));
      v11 = *(_QWORD *)v16;
      v21 = *(_OWORD *)&v16[8];
      v22 = v17;
      if ( *(_QWORD *)v16 == 0x8000000000000006LL )
      {
        v18 = v22;
        v17 = v21;
        *(_QWORD *)&v16[16] = v20;
        v10 = v19;
        *(_OWORD *)v16 = v19;
LABEL_10:
        *(_QWORD *)(a1 + 32) = *((_QWORD *)&v17 + 1);
        *(_QWORD *)(a1 + 40) = v18;
        *(_QWORD *)(a1 + 16) = *(_QWORD *)&v16[16];
        result = v17;
        *(_QWORD *)(a1 + 24) = v17;
        *(_OWORD *)a1 = v10;
      }
      else
      {
        *(_QWORD *)(a1 + 32) = v22;
        *(_OWORD *)(a1 + 16) = v21;
        *(_QWORD *)(a1 + 8) = v11;
        *(_QWORD *)a1 = 0x8000000000000000LL;
        v15 = &v19;
        return core::ptr::drop_in_place<std::path::PathBuf>(v15);
      }
      return result;
    case 4uLL:
      just::search::Search::clean(&v19, a3, a4, a2[1], a2[2]);
      just::search::Search::clean(&v21, a3, a4, a2[4], a2[5]);
      *(_QWORD *)&v16[16] = v20;
      v10 = v19;
      *(_OWORD *)v16 = v19;
      v17 = v21;
      v18 = v22;
      goto LABEL_10;
  }
}