        int a6)
{
  int v6; // r8d
  int v7; // r9d
  int v9; // r8d
  int v10; // r9d
  int v11; // [rsp+0h] [rbp-1F8h]
  __int64 v12; // [rsp+8h] [rbp-1F0h]
  int v13; // [rsp+10h] [rbp-1E8h]
  int v14[2]; // [rsp+10h] [rbp-1E8h]
  _QWORD *v17; // [rsp+30h] [rbp-1C8h]
  _QWORD *v18; // [rsp+30h] [rbp-1C8h]
  _QWORD *v19; // [rsp+30h] [rbp-1C8h]
  int v20[2]; // [rsp+38h] [rbp-1C0h]
  int v21[2]; // [rsp+40h] [rbp-1B8h] BYREF
  int v22[4]; // [rsp+48h] [rbp-1B0h]
  int v23[2]; // [rsp+70h] [rbp-188h]
  struct _Unwind_Exception *v24[2]; // [rsp+80h] [rbp-178h]
  int v25[4]; // [rsp+90h] [rbp-168h]
  __int128 v26; // [rsp+A0h] [rbp-158h]
  __int64 v27; // [rsp+B0h] [rbp-148h]
  _BYTE v28[8]; // [rsp+C0h] [rbp-138h] BYREF
  __int128 v29; // [rsp+C8h] [rbp-130h]
  __int64 v30; // [rsp+D8h] [rbp-120h]
  int v31[2]; // [rsp+E0h] [rbp-118h] BYREF
  __int128 v32; // [rsp+E8h] [rbp-110h]
  __int64 v33; // [rsp+F8h] [rbp-100h]
  __int128 v34; // [rsp+100h] [rbp-F8h]
  __int64 v35; // [rsp+110h] [rbp-E8h]
  __int128 v36; // [rsp+120h] [rbp-D8h]
  int v37[4]; // [rsp+130h] [rbp-C8h]
  __int128 v38; // [rsp+140h] [rbp-B8h]
  __int64 v39; // [rsp+150h] [rbp-A8h]
  __int128 v40; // [rsp+158h] [rbp-A0h]
  __int64 v41; // [rsp+168h] [rbp-90h]
  int v42[2]; // [rsp+170h] [rbp-88h] BYREF
  __int128 v43; // [rsp+178h] [rbp-80h]
  __int64 v44; // [rsp+188h] [rbp-70h]
  __int128 v45; // [rsp+190h] [rbp-68h]
  __int64 v46; // [rsp+1A0h] [rbp-58h]
  __int128 v47; // [rsp+1B0h] [rbp-48h]
  int v48[3]; // [rsp+1C0h] [rbp-38h]
  char v49; // [rsp+1CEh] [rbp-2Ah]
  char v50; // [rsp+1CFh] [rbp-29h]
  _QWORD v51[3]; // [rsp+1E0h] [rbp-18h] BYREF

  v49 = 0;
  v50 = 1;
  if ( (*(_BYTE *)(a2 + 56) & 1) != 0 )
  {
    v50 = 0;
    *(_QWORD *)v25 = *((_QWORD *)a4 + 2);
    *(_OWORD *)v24 = *a4;
    *(_QWORD *)v23 = *(_QWORD *)v25;
    alloc::vec::Vec<T,A>::insert(
      a2,
      0,
      (int)v21,
      v25[0],
      a5,
      a6,
      v11,
      v12,
      v13,
      (int)a4,
      a3,
      a2,
      a1,
      a1,
      a3,
      (int)v24[0],
      (int)v24[1],
      v25[0],
      v24[0],
      (int)v24[1]);
    *v19 = 0x8000000000000000LL;
  }
  else
  {
    *(_QWORD *)v14 = alloc::vec::Vec<T,A>::len(a2);
    if ( *(_QWORD *)v14 >= *(_QWORD *)(a2 + 48) )
    {
      alloc::vec::Vec<T,A>::remove(v28, a2, 0LL, &off_2A2168);
      v49 = 1;
      v27 = v30;
      v26 = v29;
      v50 = 0;
      *(_QWORD *)v37 = *((_QWORD *)a4 + 2);
      v36 = *a4;
      v35 = *(_QWORD *)v37;
      v34 = v36;
      *(_QWORD *)v31 = a3;
      v33 = *(_QWORD *)v37;
      v32 = v36;
      alloc::vec::Vec<T,A>::push(
        a2,
        (int)v31,
        v37[0],
        v37[0],
        v9,
        v10,
        v11,
        v12,
        v14[0],
        (int)a4,
        a3,
        a2,
        a1,
        a1,
        *(struct _Unwind_Exception **)v21,
        v22[0]);
      v49 = 0;
      v40 = v26;
      v41 = v27;
      if ( (_QWORD)v26 == 0x8000000000000000LL )
      {
        v51[0] = *((_QWORD *)&v40 + 1);
        core::result::unwrap_failed(aCalledResultUn, 43LL, v51, &off_2A1F00, &off_2A2180);
      }
      v38 = v40;
      v39 = v41;
      *v18 = v40;
      v18[1] = *((_QWORD *)&v38 + 1);
      v18[2] = v39;
      v49 = 0;
    }
    else
    {
      v50 = 0;
      *(_QWORD *)v48 = *((_QWORD *)a4 + 2);
      v47 = *a4;
      v46 = *(_QWORD *)v48;
      v45 = v47;
      *(_QWORD *)v42 = a3;
      v44 = *(_QWORD *)v48;
      v43 = v47;
      alloc::vec::Vec<T,A>::push(
        a2,
        (int)v42,
        v48[0],
        v48[0],
        v6,
        v7,
        v11,
        v12,
        v14[0],
        (int)a4,
        a3,
        a2,
        a1,
        a1,
        *(struct _Unwind_Exception **)v21,
        v22[0]);
      *v17 = 0x8000000000000000LL;
    }
  }
  return *(_QWORD *)v20;
}
