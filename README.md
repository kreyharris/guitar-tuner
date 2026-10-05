# Guitar Tuner

My first EE project built around a condenser microphone and an Arduino Uno R3.

## About

I'm an electrical engineering student, and this is the first project I've designed from scratch. While schematics and software are likely subpar compared to industry work, the main goal of this project is to show a deep dive into each stage of circuit design from beginning to end, with comments included about things that were tricky for me and how I handled them.

## How it works

1. A condenser microphone picks up a guitar's sound and provides an extremely small AC voltage wave.
2. A capacitor and a 2.5 V bias network center the signal.
3. An op amp amplifies the signal.
4. The Arduino Uno samples the signal using zero crossing to work out pitch.

## What's in this repo

Eventually, this repo should contain schematic files, software programmed into the Arduino, and a demo. It will also have comments about the process and how I managed to complete the project despite having no relevant coursework before starting.

## Status

Work in progress. The KiCad schematic is done, but the Arduino software hasn't been written yet. (10/4/2026)

