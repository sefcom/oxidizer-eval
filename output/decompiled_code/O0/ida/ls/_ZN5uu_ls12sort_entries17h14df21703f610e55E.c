char __fastcall uu_ls::sort_entries(char *dest, unsigned __int64 a2, _BYTE *a3, _QWORD *a4)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // r15
  __int64 v8; // r15
  __int64 v9; // r15
  __int64 v10; // r15
  __int64 v11; // r15
  unsigned __int64 v12; // r14
  char *v13; // r12
  char *v14; // rbp
  __int64 v15; // r12
  _QWORD *v17; // [rsp+0h] [rbp-178h] BYREF
  _BYTE *v18; // [rsp+8h] [rbp-170h]
  unsigned __int64 v19; // [rsp+10h] [rbp-168h]
  _QWORD desta[44]; // [rsp+18h] [rbp-160h] BYREF

  v4 = a2;
  v5 = (unsigned __int8)a3[249];
  v18 = a3;
  switch ( v5 )
  {
    case 0uLL:
      goto LABEL_39;
    case 1uLL:
      v5 = (unsigned __int64)&v17;
      desta[0] = &v17;
      if ( a2 >= 2 )
      {
        if ( a2 >= 0x15 )
        {
          LOBYTE(v5) = core::slice::sort::stable::driftsort_main(dest, a2, desta);
        }
        else
        {
          v6 = 304LL;
          do
          {
            LOBYTE(v5) = core::slice::sort::shared::smallsort::insert_tail(dest, &dest[v6]);
            v6 += 304LL;
          }
          while ( 304 * a2 != v6 );
        }
      }
      goto LABEL_38;
    case 2uLL:
      v17 = a4;
      v5 = (unsigned __int64)&v17;
      desta[0] = &v17;
      if ( a2 >= 2 )
      {
        if ( a2 >= 0x15 )
        {
          LOBYTE(v5) = core::slice::sort::stable::driftsort_main(dest, a2, desta);
        }
        else
        {
          v8 = 304LL;
          do
          {
            LOBYTE(v5) = core::slice::sort::shared::smallsort::insert_tail(dest, &dest[v8], desta);
            v8 += 304LL;
          }
          while ( 304 * a2 != v8 );
        }
      }
      goto LABEL_38;
    case 3uLL:
      desta[0] = a4;
      desta[1] = a3;
      v5 = (unsigned __int64)desta;
      v17 = desta;
      if ( a2 >= 2 )
      {
        if ( a2 >= 0x15 )
        {
          LOBYTE(v5) = core::slice::sort::stable::driftsort_main(dest, a2, &v17);
        }
        else
        {
          v9 = 304LL;
          do
          {
            LOBYTE(v5) = core::slice::sort::shared::smallsort::insert_tail(dest, &dest[v9], &v17);
            v9 += 304LL;
          }
          while ( 304 * a2 != v9 );
        }
      }
      goto LABEL_38;
    case 4uLL:
      v5 = (unsigned __int64)&v17;
      desta[0] = &v17;
      if ( a2 >= 2 )
      {
        if ( a2 >= 0x15 )
        {
          LOBYTE(v5) = core::slice::sort::stable::driftsort_main(dest, a2, desta);
        }
        else
        {
          v7 = 304LL;
          do
          {
            LOBYTE(v5) = core::slice::sort::shared::smallsort::insert_tail(dest, &dest[v7]);
            v7 += 304LL;
          }
          while ( 304 * a2 != v7 );
        }
      }
      goto LABEL_38;
    case 5uLL:
      v5 = (unsigned __int64)&v17;
      desta[0] = &v17;
      if ( a2 >= 2 )
      {
        if ( a2 >= 0x15 )
        {
          LOBYTE(v5) = core::slice::sort::stable::driftsort_main(dest, a2, desta);
        }
        else
        {
          v10 = 304LL;
          do
          {
            LOBYTE(v5) = core::slice::sort::shared::smallsort::insert_tail(dest, &dest[v10]);
            v10 += 304LL;
          }
          while ( 304 * a2 != v10 );
        }
      }
      goto LABEL_38;
    case 6uLL:
      v5 = (unsigned __int64)&v17;
      desta[0] = &v17;
      if ( a2 >= 2 )
      {
        if ( a2 >= 0x15 )
        {
          LOBYTE(v5) = core::slice::sort::stable::driftsort_main(dest, a2, desta);
        }
        else
        {
          v11 = 304LL;
          do
          {
            LOBYTE(v5) = core::slice::sort::shared::smallsort::insert_tail(dest, &dest[v11], desta);
            v11 += 304LL;
          }
          while ( 304 * a2 != v11 );
        }
      }
LABEL_38:
      a3 = v18;
LABEL_39:
      if ( (a3[231] & 1) != 0 )
      {
        if ( !dest || a2 >= 0xD79435E50D7944LL )
          core::panicking::panic_nounwind(anon_d13c0a923ac77d86b5cd3d5212361a5f_29_llvm_13257680528908953851, 166LL);
        LOBYTE(v5) = 1;
        v19 = a2;
        if ( a2 >= 2 )
        {
          v12 = v19 >> 1;
          v13 = &dest[304 * v19 - 304];
          v14 = dest;
          do
          {
            memcpy(desta, v14, 0x130uLL);
            memcpy(v14, v13, 0x130uLL);
            LOBYTE(v5) = (unsigned __int8)memcpy(v13, desta, 0x130uLL);
            v14 += 304;
            v13 -= 304;
            --v12;
          }
          while ( v12 );
        }
        v4 = v19;
        a3 = v18;
      }
      if ( (a3[237] & 1) != 0 )
      {
        if ( a3[249] )
        {
          v5 = (unsigned __int64)&v17;
          desta[0] = &v17;
          if ( v4 >= 2 )
          {
            if ( v4 >= 0x15 )
            {
              LOBYTE(v5) = core::slice::sort::stable::driftsort_main(dest, v4, desta);
            }
            else
            {
              v15 = 304LL;
              do
              {
                LOBYTE(v5) = core::slice::sort::shared::smallsort::insert_tail(dest, &dest[v15]);
                v15 += 304LL;
              }
              while ( 304 * v4 != v15 );
            }
          }
        }
      }
      return v5;
  }
}
