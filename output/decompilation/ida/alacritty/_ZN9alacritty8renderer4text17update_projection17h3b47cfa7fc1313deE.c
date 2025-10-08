__int64 __fastcall alacritty::renderer::text::update_projection(__int64 a1, float *a2)
{
  float v2; // xmm0_4
  unsigned int v3; // edx
  __int64 result; // rax
  float v5; // xmm1_4
  int v6; // r8d
  float v7; // xmm4_4
  unsigned int v8; // edx
  float v9; // xmm5_4
  int v10; // esi

  v2 = a2[4];
  v3 = (int)v2;
  result = 0LL;
  if ( v2 < 0.0 )
    v3 = 0;
  v5 = a2[8];
  if ( v2 > 4294967000.0 )
    v3 = -1;
  v6 = (int)v5;
  if ( v5 < 0.0 )
    v6 = 0;
  if ( v5 > 4294967000.0 )
    v6 = -1;
  if ( v3 >= 2 * v6 )
  {
    v7 = a2[5];
    v8 = (int)v7;
    if ( v7 < 0.0 )
      v8 = 0;
    v9 = a2[9];
    if ( v7 > 4294967000.0 )
      v8 = -1;
    v10 = (int)v9;
    if ( v9 < 0.0 )
      v10 = 0;
    if ( v9 > 4294967000.0 )
      v10 = -1;
    if ( v8 >= 2 * v10 )
      alacritty::gl::storage::Uniform4f();
  }
  return result;
}