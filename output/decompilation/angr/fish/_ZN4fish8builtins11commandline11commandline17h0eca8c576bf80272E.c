long long fish::builtins::commandline::commandline(unsigned long long a0, unsigned long long a1[3], struct_0 *a2, void* a3)
{
    unsigned int v0;  // [bp-0x500]
    char v3;  // [bp-0x4f8]
    char v20;  // [bp-0x4f6]
    unsigned int v23;  // [bp-0x4d4]
    unsigned long v25;  // [bp-0x4c8]
    unsigned long v26;  // [bp-0x4c0]
    unsigned int v31;  // [bp-0x4a0]
    char v34;  // [bp-0x498]
    unsigned int v49;  // [bp-0x438]
    unsigned int v50;  // [bp-0x434]
    unsigned int v51;  // [bp-0x430]
    unsigned int v52;  // [bp-0x42c]
    unsigned int v53;  // [bp-0x420]
    unsigned int v56;  // [bp-0x418]
    unsigned int v57;  // [bp-0x414]
    unsigned int v58;  // [bp-0x410]
    unsigned int v59;  // [bp-0x40c]
    unsigned int v63;  // [bp-0x3f0]
    unsigned int v64;  // [bp-0x3ec]
    void* v65;  // [bp-0x3e8]
    char v66;  // [bp-0x3e0]
    unsigned long long v84;  // [bp-0x378]
    void* v86;  // [bp-0x360], Other Possible Types: char
    char v87;  // [bp-0x35e]
    unsigned long long v88;  // [bp-0x358]
    void* v89;  // [bp-0x350]
    struct_0 *v90;  // [bp-0x348]
    void* v91;  // [bp-0x340]
    unsigned long long v92;  // [bp-0x338]
    unsigned long long v93;  // [bp-0x330]
    char *v94;  // [bp-0x328]
    unsigned long long v95;  // [bp-0x320]
    unsigned long long v96;  // [bp-0x318]
    int v97;  // [bp-0x310]
    void* v100;  // [bp-0x2f8]
    uint128_t v101;  // [bp-0x2f0]
    unsigned int v102;  // [bp-0x2e0]
    unsigned short v103;  // [bp-0x2dc]
    char v104;  // [bp-0x2da]
    struct_0 *v109;  // [bp-0x2c0]
    unsigned long long v110;  // [bp-0x2b8]
    unsigned long long v111;  // [bp-0x2b0]
    unsigned int v112;  // [bp-0x2a8]
    char v113;  // [bp-0x2a4]
    unsigned long long v114;  // [bp-0x2a0]
    unsigned long long v115;  // [bp-0x298]
    unsigned int v116;  // [bp-0x290]
    char v117;  // [bp-0x28c]
    unsigned long long v118;  // [bp-0x288]
    unsigned long long v119;  // [bp-0x280]
    unsigned int v120;  // [bp-0x278]
    char v121;  // [bp-0x274]
    unsigned long long v122;  // [bp-0x270]
    unsigned long long v123;  // [bp-0x268]
    unsigned int v124;  // [bp-0x260]
    char v125;  // [bp-0x25c]
    unsigned long long v126;  // [bp-0x258]
    unsigned long long v127;  // [bp-0x250]
    unsigned int v128;  // [bp-0x248]
    char v129;  // [bp-0x244]
    unsigned long long v130;  // [bp-0x240]
    unsigned long long v131;  // [bp-0x238]
    unsigned int v132;  // [bp-0x230]
    char v133;  // [bp-0x22c]
    unsigned long long v134;  // [bp-0x228]
    unsigned long long v135;  // [bp-0x220]
    unsigned int v136;  // [bp-0x218]
    char v137;  // [bp-0x214]
    unsigned long long v138;  // [bp-0x210]
    unsigned long long v139;  // [bp-0x208]
    unsigned int v140;  // [bp-0x200]
    char v141;  // [bp-0x1fc]
    unsigned long long v142;  // [bp-0x1f8]
    unsigned long long v143;  // [bp-0x1f0]
    unsigned int v144;  // [bp-0x1e8]
    char v145;  // [bp-0x1e4]
    unsigned long long v146;  // [bp-0x1e0]
    unsigned long long v147;  // [bp-0x1d8]
    unsigned int v148;  // [bp-0x1d0]
    char v149;  // [bp-0x1cc]
    unsigned long long v150;  // [bp-0x1c8]
    unsigned long long v151;  // [bp-0x1c0]
    unsigned int v152;  // [bp-0x1b8]
    char v153;  // [bp-0x1b4]
    unsigned long long v154;  // [bp-0x1b0]
    unsigned long long v155;  // [bp-0x1a8]
    unsigned int v156;  // [bp-0x1a0]
    char v157;  // [bp-0x19c]
    unsigned long long v158;  // [bp-0x198]
    unsigned long long v159;  // [bp-0x190]
    unsigned int v160;  // [bp-0x188]
    char v161;  // [bp-0x184]
    unsigned long long v162;  // [bp-0x180]
    unsigned long long v163;  // [bp-0x178]
    unsigned int v164;  // [bp-0x170]
    char v165;  // [bp-0x16c]
    unsigned long long v166;  // [bp-0x168]
    unsigned long long v167;  // [bp-0x160]
    unsigned int v168;  // [bp-0x158]
    char v169;  // [bp-0x154]
    unsigned long long v170;  // [bp-0x150]
    unsigned long long v171;  // [bp-0x148]
    unsigned int v172;  // [bp-0x140]
    char v173;  // [bp-0x13c]
    unsigned long long v174;  // [bp-0x138]
    unsigned long long v175;  // [bp-0x130]
    unsigned int v176;  // [bp-0x128]
    char v177;  // [bp-0x124]
    unsigned long long v178;  // [bp-0x120]
    unsigned long long v179;  // [bp-0x118]
    unsigned int v180;  // [bp-0x110]
    char v181;  // [bp-0x10c]
    unsigned long long v182;  // [bp-0x108]
    unsigned long long v183;  // [bp-0x100]
    unsigned int v184;  // [bp-0xf8]
    char v185;  // [bp-0xf4]
    unsigned long long v186;  // [bp-0xf0]
    unsigned long long v187;  // [bp-0xe8]
    unsigned int v188;  // [bp-0xe0]
    char v189;  // [bp-0xdc]
    unsigned long long v190;  // [bp-0xd8]
    unsigned long long v191;  // [bp-0xd0]
    unsigned int v192;  // [bp-0xc8]
    char v193;  // [bp-0xc4]
    unsigned long long v194;  // [bp-0xc0]
    unsigned long long v195;  // [bp-0xb8]
    unsigned int v196;  // [bp-0xb0]
    char v197;  // [bp-0xac]
    unsigned long long v198;  // [bp-0xa8]
    unsigned long long v199;  // [bp-0xa0]
    unsigned int v200;  // [bp-0x98]
    char v201;  // [bp-0x94]
    unsigned long long v202;  // [bp-0x90]
    unsigned long long v203;  // [bp-0x88]
    unsigned int v204;  // [bp-0x80]
    char v205;  // [bp-0x7c]
    unsigned long long v206;  // [bp-0x78]
    unsigned long long v207;  // [bp-0x70]
    unsigned int v208;  // [bp-0x68]
    char v209;  // [bp-0x64]
    unsigned short v210;  // [bp-0x63]
    char v211;  // [bp-0x61]
    unsigned long long v212;  // [bp-0x60]
    unsigned long long v213;  // [bp-0x58]
    unsigned int v214;  // [bp-0x50]
    char v215;  // [bp-0x4c]
    unsigned short v216;  // [bp-0x4b]
    char v217;  // [bp-0x49]
    unsigned long long v218;  // [bp-0x48]
    unsigned long long v219;  // [bp-0x40]
    unsigned int v220;  // [bp-0x38]
    char v221;  // [bp-0x34]
    unsigned short v222;  // [bp-0x33]
    char v223;  // [bp-0x31]
    unsigned long v225;  // rcx
    unsigned long long v226;  // rcx
    void* v233;  // r13
    void* v234;  // rbx
    char v329;  // dl

    fish::reader::commandline_get_state(&v66, 1);
    v84 = 0x8000000000000000;
    v110 = "a";
    v111 = 6;
    v112 = 97;
    v113 = 0;
    v114 = "i";
    v115 = 6;
    v116 = 105;
    v117 = 0;
    v118 = "i";
    v119 = 12;
    v120 = 6;
    v121 = 0;
    v122 = "r";
    v123 = 7;
    v124 = 114;
    v125 = 0;
    v126 = "c";
    v127 = 14;
    v128 = 98;
    v129 = 0;
    v130 = "c";
    v131 = 11;
    v132 = 106;
    v133 = 0;
    v134 = "c";
    v135 = 15;
    v136 = 112;
    v137 = 0;
    v138 = "c";
    v139 = 17;
    v140 = 115;
    v141 = 0;
    v142 = "c";
    v143 = 13;
    v144 = 116;
    v145 = 0;
    v146 = "c";
    v147 = 13;
    v148 = 99;
    v149 = 0;
    v150 = "f";
    v151 = 8;
    v152 = 102;
    v153 = 0;
    v154 = "t";
    v155 = 15;
    v156 = 120;
    v157 = 0;
    v158 = "t";
    v159 = 10;
    v160 = 2;
    v161 = 0;
    v162 = "t";
    v163 = 8;
    v164 = 111;
    v165 = 0;
    v166 = "h";
    v167 = 4;
    v168 = 104;
    v169 = 0;
    v170 = "i";
    v171 = 5;
    v172 = 73;
    v173 = 1;
    v174 = "c";
    v175 = 6;
    v176 = 67;
    v177 = 0;
    v178 = "s";
    v179 = 15;
    v180 = 66;
    v181 = 0;
    v182 = "s";
    v183 = 13;
    v184 = 69;
    v185 = 0;
    v186 = "l";
    v187 = 4;
    v188 = 76;
    v189 = 0;
    v190 = "c";
    v191 = 6;
    v192 = 5;
    v193 = 0;
    v194 = "s";
    v195 = 11;
    v196 = 83;
    v197 = 0;
    v198 = "p";
    v199 = 11;
    v200 = 80;
    v201 = 0;
    v202 = "p";
    v203 = 16;
    v204 = 70;
    v205 = 0;
    v206 = "s";
    v207 = 12;
    v208 = 3;
    v209 = 0;
    v211 = v20;
    v210 = *((short *)&v3);
    v212 = "i";
    v213 = 8;
    v214 = 1;
    v215 = 0;
    v216 = *((short *)&v34);
    v217 = v34;
    v218 = "s";
    v219 = 18;
    v220 = 4;
    v221 = 0;
    v222 = *((short *)&v86);
    v223 = v87;
    v90 = a2;
    v91 = a3;
    v92 = "a";
    v93 = 21;
    v94 = &v110;
    v95 = 27;
    v96 = 4;
    *((uint128_t *)&v97) = 0;
    v100 = 0;
    v102 = 63;
    v104 = 1;
    v103 = 0;
    v86 = 0;
    v101 = 0;
    v88 = 8;
    v89 = 0;
    v65 = a3;
    if (!a3)
    {
        v234 = 0;
        v233 = 0;
        core::panicking::panic_bounds_check(v234, v233, v329); /* do not return */
    }
    v25 = a2->field_0[0];
    v109 = a2;
    v26 = a2->field_0[1];
    v52 = (unsigned int)a2->field_0[1] & 0xffffff00 | 3;
    v226 = v225 & 0xffffffffffffff00 | 4;
    v63 = 0;
    v0 = v52 & 0xffffff00 | 4;
    v64 = 0;
    v49 = 0;
    v59 = 0;
    v56 = 0;
    v50 = 0;
    v57 = 0;
    v31 = 0;
    v53 = 0;
    v23 = 0;
    v51 = 0;
    v58 = 0;
}
