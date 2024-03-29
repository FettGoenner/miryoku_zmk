// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#include "keys_de.h"

#define MIRYOKU_ALPHAS_QWERTZ
#define MIRYOKU_TAP_QWERTZ
#define MIRYOKU_NAV_VI

/ {
    combos {
        compatible = "zmk,combos";
        combo_esc {
            timeout-ms = <50>;
            key-positions = <0 1>;
            bindings = <&kp ESC>;
        };
    };
};
