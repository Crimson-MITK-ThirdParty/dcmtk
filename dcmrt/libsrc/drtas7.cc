/*
 *
 *  Copyright (C) 2008-2012, OFFIS e.V. and ICSMED AG, Oldenburg, Germany
 *  Copyright (C) 2013-2015, J. Riesmeier, Oldenburg, Germany
 *  All rights reserved.  See COPYRIGHT file for details.
 *
 *  Source file for class DRTApplicatorSequenceInRTIonBeamsSessionRecordModule
 *
 *  Generated automatically from DICOM PS 3.3-2015c
 *  File created on 2015-12-07 16:29:33
 *
 */


#include "dcmtk/config/osconfig.h"     // make sure OS specific configuration is included first

#include "dcmtk/dcmrt/seq/drtas7.h"


// --- item class ---

DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::Item::Item(const OFBool emptyDefaultItem)
  : EmptyDefaultItem(emptyDefaultItem),
    AccessoryCode(DCM_AccessoryCode),
    ApplicatorDescription(DCM_ApplicatorDescription),
    ApplicatorID(DCM_ApplicatorID),
    ApplicatorType(DCM_ApplicatorType)
{
}


DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::Item::Item(const Item &copy)
  : EmptyDefaultItem(copy.EmptyDefaultItem),
    AccessoryCode(copy.AccessoryCode),
    ApplicatorDescription(copy.ApplicatorDescription),
    ApplicatorID(copy.ApplicatorID),
    ApplicatorType(copy.ApplicatorType)
{
}


DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::Item::~Item()
{
}


DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::Item &DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::Item::operator=(const Item &copy)
{
    if (this != &copy)
    {
        EmptyDefaultItem = copy.EmptyDefaultItem;
        AccessoryCode = copy.AccessoryCode;
        ApplicatorDescription = copy.ApplicatorDescription;
        ApplicatorID = copy.ApplicatorID;
        ApplicatorType = copy.ApplicatorType;
    }
    return *this;
}


void DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::Item::clear()
{
    if (!EmptyDefaultItem)
    {
        /* clear all DICOM attributes */
        ApplicatorID.clear();
        AccessoryCode.clear();
        ApplicatorType.clear();
        ApplicatorDescription.clear();
    }
}


OFBool DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::Item::isEmpty()
{
    return ApplicatorID.isEmpty() &&
           AccessoryCode.isEmpty() &&
           ApplicatorType.isEmpty() &&
           ApplicatorDescription.isEmpty();
}


OFBool DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::Item::isValid() const
{
    return !EmptyDefaultItem;
}


OFCondition DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::Item::read(DcmItem &item)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultItem)
    {
        /* re-initialize object */
        clear();
        getAndCheckElementFromDataset(item, ApplicatorID, "1", "1", "ApplicatorSequence");
        getAndCheckElementFromDataset(item, AccessoryCode, "1", "3", "ApplicatorSequence");
        getAndCheckElementFromDataset(item, ApplicatorType, "1", "1", "ApplicatorSequence");
        getAndCheckElementFromDataset(item, ApplicatorDescription, "1", "3", "ApplicatorSequence");
        result = EC_Normal;
    }
    return result;
}


OFCondition DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::Item::write(DcmItem &item)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultItem)
    {
        result = EC_Normal;
        addElementToDataset(result, item, new DcmShortString(ApplicatorID), "1", "1", "ApplicatorSequence");
        addElementToDataset(result, item, new DcmLongString(AccessoryCode), "1", "3", "ApplicatorSequence");
        addElementToDataset(result, item, new DcmCodeString(ApplicatorType), "1", "1", "ApplicatorSequence");
        addElementToDataset(result, item, new DcmLongString(ApplicatorDescription), "1", "3", "ApplicatorSequence");
    }
    return result;
}


OFCondition DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::Item::getAccessoryCode(OFString &value, const signed long pos) const
{
    if (EmptyDefaultItem)
        return EC_IllegalCall;
    else
        return getStringValueFromElement(AccessoryCode, value, pos);
}


OFCondition DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::Item::getApplicatorDescription(OFString &value, const signed long pos) const
{
    if (EmptyDefaultItem)
        return EC_IllegalCall;
    else
        return getStringValueFromElement(ApplicatorDescription, value, pos);
}


OFCondition DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::Item::getApplicatorID(OFString &value, const signed long pos) const
{
    if (EmptyDefaultItem)
        return EC_IllegalCall;
    else
        return getStringValueFromElement(ApplicatorID, value, pos);
}


OFCondition DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::Item::getApplicatorType(OFString &value, const signed long pos) const
{
    if (EmptyDefaultItem)
        return EC_IllegalCall;
    else
        return getStringValueFromElement(ApplicatorType, value, pos);
}


OFCondition DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::Item::setAccessoryCode(const OFString &value, const OFBool check)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultItem)
    {
        result = (check) ? DcmLongString::checkStringValue(value, "1") : EC_Normal;
        if (result.good())
            result = AccessoryCode.putOFStringArray(value);
    }
    return result;
}


OFCondition DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::Item::setApplicatorDescription(const OFString &value, const OFBool check)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultItem)
    {
        result = (check) ? DcmLongString::checkStringValue(value, "1") : EC_Normal;
        if (result.good())
            result = ApplicatorDescription.putOFStringArray(value);
    }
    return result;
}


OFCondition DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::Item::setApplicatorID(const OFString &value, const OFBool check)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultItem)
    {
        result = (check) ? DcmShortString::checkStringValue(value, "1") : EC_Normal;
        if (result.good())
            result = ApplicatorID.putOFStringArray(value);
    }
    return result;
}


OFCondition DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::Item::setApplicatorType(const OFString &value, const OFBool check)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultItem)
    {
        result = (check) ? DcmCodeString::checkStringValue(value, "1") : EC_Normal;
        if (result.good())
            result = ApplicatorType.putOFStringArray(value);
    }
    return result;
}


// --- sequence class ---

DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::DRTApplicatorSequenceInRTIonBeamsSessionRecordModule(const OFBool emptyDefaultSequence)
  : EmptyDefaultSequence(emptyDefaultSequence),
    SequenceOfItems(),
    CurrentItem(),
    EmptyItem(OFTrue /*emptyDefaultItem*/)
{
    CurrentItem = SequenceOfItems.end();
}


DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::DRTApplicatorSequenceInRTIonBeamsSessionRecordModule(const DRTApplicatorSequenceInRTIonBeamsSessionRecordModule &copy)
  : EmptyDefaultSequence(copy.EmptyDefaultSequence),
    SequenceOfItems(),
    CurrentItem(),
    EmptyItem(OFTrue /*emptyDefaultItem*/)
{
    /* create a copy of the internal sequence of items */
    Item *item = NULL;
    OFListConstIterator(Item *) current = copy.SequenceOfItems.begin();
    const OFListConstIterator(Item *) last = copy.SequenceOfItems.end();
    while (current != last)
    {
        item = new Item(**current);
        if (item != NULL)
        {
            SequenceOfItems.push_back(item);
        } else {
            /* memory exhausted, there is nothing we can do about it */
            break;
        }
        ++current;
    }
    CurrentItem = SequenceOfItems.begin();
}


DRTApplicatorSequenceInRTIonBeamsSessionRecordModule &DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::operator=(const DRTApplicatorSequenceInRTIonBeamsSessionRecordModule &copy)
{
    if (this != &copy)
    {
        clear();
        EmptyDefaultSequence = copy.EmptyDefaultSequence;
        /* create a copy of the internal sequence of items */
        Item *item = NULL;
        OFListConstIterator(Item *) current = copy.SequenceOfItems.begin();
        const OFListConstIterator(Item *) last = copy.SequenceOfItems.end();
        while (current != last)
        {
            item = new Item(**current);
            if (item != NULL)
            {
                SequenceOfItems.push_back(item);
            } else {
                /* memory exhausted, there is nothing we can do about it */
                break;
            }
            ++current;
        }
        CurrentItem = SequenceOfItems.begin();
    }
    return *this;
}


DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::~DRTApplicatorSequenceInRTIonBeamsSessionRecordModule()
{
    clear();
}


void DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::clear()
{
    if (!EmptyDefaultSequence)
    {
        CurrentItem = SequenceOfItems.begin();
        const OFListConstIterator(Item *) last = SequenceOfItems.end();
        /* delete all items and free memory */
        while (CurrentItem != last)
        {
            delete (*CurrentItem);
            CurrentItem = SequenceOfItems.erase(CurrentItem);
        }
        /* make sure that the list is empty */
        SequenceOfItems.clear();
        CurrentItem = SequenceOfItems.end();
    }
}


OFBool DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::isEmpty()
{
    return SequenceOfItems.empty();
}


OFBool DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::isValid() const
{
    return !EmptyDefaultSequence;
}


unsigned long DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::getNumberOfItems() const
{
    return SequenceOfItems.size();
}


OFCondition DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::gotoFirstItem()
{
    OFCondition result = EC_IllegalCall;
    if (!SequenceOfItems.empty())
    {
        CurrentItem = SequenceOfItems.begin();
        result = EC_Normal;
    }
    return result;
}


OFCondition DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::gotoNextItem()
{
    OFCondition result = EC_IllegalCall;
    if (CurrentItem != SequenceOfItems.end())
    {
        ++CurrentItem;
        result = EC_Normal;
    }
    return result;
}


OFCondition DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::gotoItem(const unsigned long num, OFListIterator(Item *) &iterator)
{
    OFCondition result = EC_IllegalCall;
    if (!SequenceOfItems.empty())
    {
        unsigned long idx = num + 1;
        iterator = SequenceOfItems.begin();
        const OFListConstIterator(Item *) last = SequenceOfItems.end();
        while ((--idx > 0) && (iterator != last))
            ++iterator;
        /* specified list item found? */
        if ((idx == 0) && (iterator != last))
            result = EC_Normal;
        else
            result = EC_IllegalParameter;
    }
    return result;
}


OFCondition DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::gotoItem(const unsigned long num, OFListConstIterator(Item *) &iterator) const
{
    OFCondition result = EC_IllegalCall;
    if (!SequenceOfItems.empty())
    {
        unsigned long idx = num + 1;
        iterator = SequenceOfItems.begin();
        const OFListConstIterator(Item *) last = SequenceOfItems.end();
        while ((--idx > 0) && (iterator != last))
            ++iterator;
        /* specified list item found? */
        if ((idx == 0) && (iterator != last))
            result = EC_Normal;
        else
            result = EC_IllegalParameter;
    }
    return result;
}


OFCondition DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::gotoItem(const unsigned long num)
{
    return gotoItem(num, CurrentItem);
}


OFCondition DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::getCurrentItem(Item *&item) const
{
    OFCondition result = EC_IllegalCall;
    if (CurrentItem != SequenceOfItems.end())
    {
        item = *CurrentItem;
        result = EC_Normal;
    }
    return result;
}


DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::Item &DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::getCurrentItem()
{
    if (CurrentItem != SequenceOfItems.end())
        return **CurrentItem;
    else
        return EmptyItem;
}


const DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::Item &DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::getCurrentItem() const
{
    if (CurrentItem != SequenceOfItems.end())
        return **CurrentItem;
    else
        return EmptyItem;
}


OFCondition DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::getItem(const unsigned long num, Item *&item)
{
    OFListIterator(Item *) iterator;
    OFCondition result = gotoItem(num, iterator);
    if (result.good())
        item = *iterator;
    return result;
}


DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::Item &DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::getItem(const unsigned long num)
{
    OFListIterator(Item *) iterator;
    if (gotoItem(num, iterator).good())
        return **iterator;
    else
        return EmptyItem;
}


const DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::Item &DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::getItem(const unsigned long num) const
{
    OFListConstIterator(Item *) iterator;
    if (gotoItem(num, iterator).good())
        return **iterator;
    else
        return EmptyItem;
}


DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::Item &DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::operator[](const unsigned long num)
{
    return getItem(num);
}


const DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::Item &DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::operator[](const unsigned long num) const
{
    return getItem(num);
}


OFCondition DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::addItem(Item *&item)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultSequence)
    {
        item = new Item();
        if (item != NULL)
        {
            SequenceOfItems.push_back(item);
            result = EC_Normal;
        } else
            result = EC_MemoryExhausted;
    }
    return result;
}


OFCondition DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::insertItem(const unsigned long pos, Item *&item)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultSequence)
    {
        OFListIterator(Item *) iterator;
        result = gotoItem(pos, iterator);
        if (result.good())
        {
            item = new Item();
            if (item != NULL)
            {
                SequenceOfItems.insert(iterator, 1, item);
                result = EC_Normal;
            } else
                result = EC_MemoryExhausted;
        } else
            result = addItem(item);
    }
    return result;
}


OFCondition DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::removeItem(const unsigned long pos)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultSequence)
    {
        OFListIterator(Item *) iterator;
        if (gotoItem(pos, iterator).good())
        {
            delete *iterator;
            iterator = SequenceOfItems.erase(iterator);
            result = EC_Normal;
        } else
            result = EC_IllegalParameter;
    }
    return result;
}


OFCondition DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::read(DcmItem &dataset,
                                                                       const OFString &card,
                                                                       const OFString &type,
                                                                       const char *moduleName)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultSequence)
    {
        /* re-initialize object */
        clear();
        /* retrieve sequence element from dataset */
        DcmSequenceOfItems *sequence;
        result = dataset.findAndGetSequence(DCM_ApplicatorSequence, sequence);
        if (sequence != NULL)
        {
            if (checkElementValue(*sequence, card, type, result, moduleName))
            {
                DcmStack stack;
                OFBool first = OFTrue;
                /* iterate over all sequence items */
                while (result.good() && sequence->nextObject(stack, first /*intoSub*/).good())
                {
                    DcmItem *ditem = OFstatic_cast(DcmItem *, stack.top());
                    if (ditem != NULL)
                    {
                        Item *item = new Item();
                        if (item != NULL)
                        {
                            result = item->read(*ditem);
                            if (result.good())
                            {
                                /* append new item to the end of the list */
                                SequenceOfItems.push_back(item);
                                first = OFFalse;
                            }
                        } else
                            result = EC_MemoryExhausted;
                    } else
                        result = EC_CorruptedData;
                }
            }
        } else {
            DcmSequenceOfItems element(DCM_ApplicatorSequence);
            checkElementValue(element, card, type, result, moduleName);
        }
    }
    return result;
}


OFCondition DRTApplicatorSequenceInRTIonBeamsSessionRecordModule::write(DcmItem &dataset,
                                                                        const OFString &card,
                                                                        const OFString &type,
                                                                        const char *moduleName)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultSequence)
    {
        result = EC_MemoryExhausted;
        DcmSequenceOfItems *sequence = new DcmSequenceOfItems(DCM_ApplicatorSequence);
        if (sequence != NULL)
        {
            result = EC_Normal;
            /* an empty optional sequence is not written */
            if ((type == "2") || !SequenceOfItems.empty())
            {
                OFListIterator(Item *) iterator = SequenceOfItems.begin();
                const OFListConstIterator(Item *) last = SequenceOfItems.end();
                /* iterate over all sequence items */
                while (result.good() && (iterator != last))
                {
                    DcmItem *item = new DcmItem();
                    if (item != NULL)
                    {
                        /* append new item to the end of the sequence */
                        result = sequence->append(item);
                        if (result.good())
                        {
                            result = (*iterator)->write(*item);
                            ++iterator;
                        } else
                            delete item;
                    } else
                        result = EC_MemoryExhausted;
                }
                if (result.good())
                {
                    /* insert sequence element into the dataset */
                    result = dataset.insert(sequence, OFTrue /*replaceOld*/);
                }
                if (DCM_dcmrtLogger.isEnabledFor(OFLogger::WARN_LOG_LEVEL))
                    checkElementValue(*sequence, card, type, result, moduleName);
                if (result.good())
                {
                    /* forget reference to sequence object (avoid deletion below) */
                    sequence = NULL;
                }
            }
            else if (type == "1")
            {
                /* empty type 1 sequence not allowed */
                result = RT_EC_InvalidValue;
                if (DCM_dcmrtLogger.isEnabledFor(OFLogger::WARN_LOG_LEVEL))
                    checkElementValue(*sequence, card, type, result, moduleName);
            }
            /* delete sequence (if not inserted into the dataset) */
            delete sequence;
        }
    }
    return result;
}


// end of source file
