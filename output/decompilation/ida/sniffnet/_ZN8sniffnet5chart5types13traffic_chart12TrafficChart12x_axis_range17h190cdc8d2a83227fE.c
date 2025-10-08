float __fastcall sniffnet::chart::types::traffic_chart::TrafficChart::x_axis_range(unsigned int a1, char a2)
{
  float result; // xmm0_4
  int v3; // ecx

  result = 0.0;
  if ( a1 != 1 && (a2 & 1) == 0 )
  {
    v3 = a1 - 30;
    if ( a1 < 0x1E )
      return (float)0;
    return (float)v3;
  }
  return result;
}