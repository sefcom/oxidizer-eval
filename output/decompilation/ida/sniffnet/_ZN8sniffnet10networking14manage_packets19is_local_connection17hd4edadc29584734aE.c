__int64 __fastcall sniffnet::networking::manage_packets::is_local_connection(char *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rax
  char v7; // r8
  int v8; // r9d
  int v9; // r10d
  char v10; // di
  unsigned int v11; // r13d
  __int64 v12; // rcx
  char v13; // al
  unsigned __int64 v14; // rax
  _BYTE *v15; // rdx
  unsigned __int64 v16; // rbp
  _BYTE *v17; // r15
  int v18; // eax
  char v19; // dl
  int v20; // ecx
  unsigned __int64 v21; // rax
  _BYTE *v22; // rdx
  unsigned __int64 v23; // rbp
  _BYTE *v24; // r15
  char v26; // [rsp+2h] [rbp-E6h]
  char v27; // [rsp+3h] [rbp-E5h]
  int v28; // [rsp+4h] [rbp-E4h]
  int v29; // [rsp+8h] [rbp-E0h]
  int v30; // [rsp+Ch] [rbp-DCh]
  __int64 v31; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v32; // [rsp+18h] [rbp-D0h]
  __int64 v33; // [rsp+20h] [rbp-C8h]
  __int64 v34; // [rsp+28h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+30h] [rbp-B8h]
  __int64 v36; // [rsp+38h] [rbp-B0h]
  __int64 v37; // [rsp+40h] [rbp-A8h]
  __int128 *v38; // [rsp+48h] [rbp-A0h] BYREF
  char *v39; // [rsp+50h] [rbp-98h]
  __int64 v40; // [rsp+58h] [rbp-90h]
  __int128 v41; // [rsp+60h] [rbp-88h] BYREF
  __int128 v42; // [rsp+70h] [rbp-78h]
  __int128 *v43; // [rsp+88h] [rbp-60h]
  __int128 v44; // [rsp+90h] [rbp-58h] BYREF
  __int128 v45; // [rsp+A0h] [rbp-48h] BYREF

  if ( a3 )
  {
    v4 = a2;
    v5 = a2 + 68 * a3;
    v6 = v4 + 68;
    v7 = *a1;
    v8 = *(_DWORD *)(a1 + 1);
    v43 = (__int128 *)(a1 + 1);
    v9 = (unsigned __int16)v8;
    v10 = v7 & ((v8 & 0xC0FF) != 33022);
    v11 = 0;
    v37 = v5;
    v29 = v8;
    v26 = v10;
    v28 = (unsigned __int16)v8;
    v27 = v7;
    while ( 1 )
    {
      v12 = v4;
      v4 = v6;
      if ( *(_BYTE *)v12 )
      {
        v45 = *(_OWORD *)(v12 + 1);
        if ( v10 )
        {
          v13 = *(_BYTE *)(v12 + 17);
          if ( v13 != 2 && (v13 & 1) != 0 )
          {
            v44 = *(_OWORD *)(v12 + 18);
            v31 = 0LL;
            v32 = 1LL;
            v33 = 0LL;
            v34 = 0LL;
            v35 = 1LL;
            v36 = 0LL;
            v41 = v45;
            v42 = *v43;
            v38 = &v44;
            v39 = (char *)&v45;
            v40 = 0LL;
            while ( 1 )
            {
              v14 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v38);
              if ( !v15 )
                break;
              v16 = v14;
              if ( v14 >= 0x10 )
                core::panicking::panic_bounds_check(v14, 16LL, &off_2DFF600);
              v17 = v15;
              alloc::vec::Vec<T,A>::push(&v31, (unsigned __int8)(*((_BYTE *)&v41 + v14) & *v15), &off_2DFF618);
              alloc::vec::Vec<T,A>::push(&v34, (unsigned __int8)(*((_BYTE *)&v42 + v16) & *v17), &off_2DFF630);
            }
            LOBYTE(v11) = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
                            v32,
                            v33,
                            v35,
                            v36) | v11;
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v34);
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v31);
            v5 = v37;
            v7 = v27;
            v8 = v29;
            v10 = v26;
            v9 = v28;
          }
        }
        else
        {
          LOBYTE(v11) = v7 | v11;
        }
      }
      else if ( (v7 & 1) == 0 )
      {
        v18 = *(_DWORD *)(v12 + 1);
        v30 = v8;
        LOBYTE(v3) = 1;
        if ( v9 == 65193 )
          goto LABEL_5;
        v19 = *(_BYTE *)(v12 + 17);
        if ( v19 != 2 && (v19 & 1) == 0 )
        {
          v20 = *(_DWORD *)(v12 + 18);
          v31 = 0LL;
          v32 = 1LL;
          v33 = 0LL;
          v34 = 0LL;
          v35 = 1LL;
          v36 = 0LL;
          LODWORD(v41) = v20;
          LODWORD(v42) = v18;
          v38 = &v41;
          v39 = (char *)&v41 + 4;
          v40 = 0LL;
          while ( 1 )
          {
            v21 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v38);
            if ( !v22 )
              break;
            v23 = v21;
            if ( v21 >= 4 )
              core::panicking::panic_bounds_check(v21, 4LL, &off_2DFF5B8);
            v24 = v22;
            alloc::vec::Vec<T,A>::push(&v31, (unsigned __int8)(*((_BYTE *)&v42 + v21) & *v22), &off_2DFF5D0);
            alloc::vec::Vec<T,A>::push(&v34, (unsigned __int8)(*((_BYTE *)&v30 + v23) & *v24), &off_2DFF5E8);
          }
          v3 = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
                 v32,
                 v33,
                 v35,
                 v36);
          LOBYTE(v3) = v11 | v3;
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v34);
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v31);
          v5 = v37;
          v7 = v27;
          v8 = v29;
          v10 = v26;
          v9 = v28;
          goto LABEL_5;
        }
      }
      v3 = v11;
LABEL_5:
      v6 = v4 + 68;
      v11 = v3;
      if ( v4 == v5 )
        goto LABEL_25;
    }
  }
  v3 = 0;
LABEL_25:
  LOBYTE(v3) = v3 & 1;
  return v3;
}