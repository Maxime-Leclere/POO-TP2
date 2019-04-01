#ifndef DUREE_H
#define DUREE_H

namespace nsUtil
{
    typedef unsigned long long ULLong_t;

    class Duree
    {
      private :
        ULLong_t       myDuree;
        short unsigned mySeconds;
        short unsigned myMinutes;
        short unsigned myHours;
        ULLong_t       myDays;

        void normaliser (void);

      public :
        Duree  (const ULLong_t duree = ULLong_t (0));
        Duree  (const Duree & duree);
        ~Duree (void);

        ULLong_t getDuree (void) const;

        void display (void) const;

        void incr (const ULLong_t delta = ULLong_t (0));
        void decr (const ULLong_t delta = ULLong_t (0));

        Duree operator + (const Duree d1) const;
        Duree operator - (const Duree d1) const;

        bool operator < (const Duree d1) const;
        bool operator > (const Duree d1) const;

        bool operator == (const Duree d1) const;
        bool operator != (const Duree d1) const;

    }; // Duree

} // nsUtil



#endif // DUREE_H
